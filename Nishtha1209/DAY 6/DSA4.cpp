//Problem Name- Longest Article
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <ctime>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define clr(a) memset(a,0,sizeof(a))
const int inf=1000000000,N=200,E=100000;
int tot,T,n,m,flow,_,w;
int y[E],nxt[E],fst[N],f[E],c[N],d[N],g[N],pre[N],ca[N],cb[N],val[N][N],vis[N],p1[N],p2[N];
char sa[N],sb[N],sc[N],out[20010000],*cur;
void add(int u,int v,int w) {
	tot++;y[tot]=v;nxt[tot]=fst[u];f[tot]=w;fst[u]=tot;
	tot++;y[tot]=u;nxt[tot]=fst[v];f[tot]=0;fst[v]=tot;
}
void sap() {
	int u=0;
	rep(i,0,T+1) c[i]=fst[i];
	d[0]=3;
	rep(i,1,m+1) d[i]=2;
	rep(i,m+1,m+m+1) d[i]=1;
	d[m+m+1]=0;
	rep(i,0,T+1) g[d[i]]++;
	while (d[0]<=T) {
		while (c[u]&&(!f[c[u]]||d[u]!=d[y[c[u]]]+1)) c[u]=nxt[c[u]];
		if (c[u]) {
			pre[y[c[u]]]=c[u]^1;u=y[c[u]];
			if (u==T) {
				int t=inf;
				for (int p=pre[T];p;p=pre[y[p]]) if (t>f[p^1]) t=f[p^1];
				for (int p=pre[T];p;p=pre[y[p]]) f[p]+=t,f[p^1]-=t;
				flow+=t;u=0;
			}
		} else {
			if (!(--g[d[u]])) break;
			d[u]=T+1;c[u]=fst[u];
			for (int j=fst[u];j;j=nxt[j]) if (f[j]&&d[y[j]]+1<d[u])
				d[u]=d[y[j]]+1,c[u]=j;
			g[d[u]]++;
			if (u!=0) u=y[pre[u]];
		}
	}
}
bool check(int v) {
	clr(fst);clr(nxt);clr(f);clr(y);tot=1;
	rep(i,1,m+1) rep(j,1,m+1) add(i,j+m,val[i][j]);
	rep(i,1,m+1) add(0,i,v);
	rep(i,m+1,m+m+1) add(i,T,v);
	flow=0;
	sap();
	return flow==v*m;
}
bool dfs(int u) {
	rep(j,1,m+1) if (val[u][j]&&!vis[j]) {
		vis[j]=1;
		if (!p2[j]||dfs(p2[j])) {
			p1[u]=j;p2[j]=u;
			return 1;
		}
	}
	return 0;
}
int main() {
	for (scanf("%d",&_);_;_--) {
		clr(ca);clr(cb);clr(val);
		clr(sa);clr(sb);
		tot=1;
		scanf("%d",&n);if (n) scanf("%s",sa);
		rep(i,1,n+1) ca[sa[i-1]]=i;
		scanf("%d",&m);if (m) scanf("%s",sb);
		rep(i,1,m+1) cb[sb[i-1]]=i;
		T=m+m+1;
		rep(i,0,n*m) {
			scanf("%s%d",sc,&w);
			val[ca[sc[0]]][cb[sc[1]]]=w;
		}
		if (n>m||n==0||m==0) {
			printf("0\n0\n");
			continue;
		}
		rep(i,n+1,m+1) rep(j,1,m+1) val[i][j]=inf;
		int l=0,r=inf;
		while (l+1<r) {
			int md=(l+r)>>1;
			if (check(md)) l=md; else r=md;
		}
		printf("%d\n",l);
		check(l);
		clr(val);
		rep(i,1,m+1) for (int j=fst[i];j;j=nxt[j]) 
			if (y[j]>m&&y[j]<T) val[i][y[j]-m]=f[j^1];
		clr(p1);clr(p2);clr(out); 
		tot=0;cur=out;
		rep(i,1,m+1) clr(vis),dfs(i);
		while (l) {
			int t=inf;
			rep(i,1,m+1) assert(p1[i]!=0);
			rep(i,1,m+1) t=min(t,val[i][p1[i]]);
			sprintf(cur,"%d",t);
			while (*cur) cur++;
			rep(i,1,n+1) {
				*cur++=' ';
				*cur++=sa[i-1];
				*cur++=sb[p1[i]-1];
			}
			*cur++='\n';
			rep(i,1,m+1) val[i][p1[i]]-=t;
			l-=t;tot++;
			rep(i,1,m+1) if (val[i][p1[i]]==0) p2[p1[i]]=0,p1[i]=0;
			rep(i,1,m+1) if (p1[i]==0) clr(vis),dfs(i);
		}
		printf("%d\n%s",tot,out);
	}
}
