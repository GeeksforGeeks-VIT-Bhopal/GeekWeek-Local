#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define db double
#define ld long double
#define pii pair<ll,int>
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vii vector<vi>
#define lb lower_bound
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,b,a) for(int i=(b);i>=(a);--i)
#define rep0(i,a,b) for(int i=(a);i<(b);++i)
#define fore(i,a) for(int i=0;i<a.size();++i)
#define gc() getchar()
inline int rd()
{
	int x=0;char c=gc();while(!isdigit(c))c=gc();
	while(isdigit(c))x=x*10+c-48,c=gc();return x;
}
const int N=1000005,inf=1e8;
int n,cc,hd[N],fa[N],d[N],sz[N],hs[N],vis[N],q[N],s[N],f[N],ls[N],rs[N];
struct E{int v,nxt;}e[N];
inline void add(int u,int v){e[++cc]=(E){v,hd[u]};hd[u]=cc;} 
struct st{int a[2][2];}w[N],T[N];
inline int gtmx(st x){return max(max(x.a[0][0],x.a[0][1]),max(x.a[1][0],x.a[1][1]));}
inline st operator+(const st&a,const st&b)
{
	st c;rep(i,0,1)rep(j,0,1)c.a[i][j]=-inf;
	rep(i,0,1)rep(j,0,1)rep(k,0,1)c.a[i][j]=max(c.a[i][j],a.a[i][k]+b.a[k][j]);
	return c;
}
void pre(int x,int p)
{
	hs[x]=0;sz[x]=1;
	for(int i=hd[x];i;i=e[i].nxt)
	{
		int y=e[i].v;pre(y,x);sz[x]+=sz[y];
		if(sz[y]>sz[hs[x]])hs[x]=y;
	}
}
inline void up(int x)
{
	if(ls[x]&&rs[x])T[x]=T[ls[x]]+w[x]+T[rs[x]];
	else if(ls[x])T[x]=T[ls[x]]+w[x];
	else if(rs[x])T[x]=w[x]+T[rs[x]];
	else T[x]=w[x];
}
int cbuild(int l,int r)
{
	if(l>r)return 0;int m=lower_bound(s+l,s+r+1,(s[l-1]+s[r])>>1)-s,x=q[m];
	ls[x]=cbuild(l,m-1);if(ls[x])f[ls[x]]=x;
	rs[x]=cbuild(m+1,r);if(rs[x])f[rs[x]]=x;
	up(x);return x;
}
int tbuild(int x)
{
	for(int i=x;i;i=hs[i])vis[i]=1;
	for(int i=x;i;i=hs[i])
	{
		w[i].a[0][0]=0;w[i].a[0][1]=0;
		w[i].a[1][0]=(i==1?1:0);w[i].a[1][1]=-inf;
		for(int j=hd[i],y;j;j=e[j].nxt)if(!vis[y=e[j].v])
		{
			int t=tbuild(y);f[t]=i;
			int s=gtmx(T[t]);w[i].a[0][0]+=s;w[i].a[0][1]+=s;
			w[i].a[1][0]+=max(T[t].a[0][0],T[t].a[0][1]);
		}
	}
	int nn=0;
	for(int i=x;i;i=hs[i])q[++nn]=i,s[nn]=s[nn-1]+sz[i]-sz[hs[i]];
	int t=cbuild(1,nn);return t;
} 
inline void upd(int x)
{
	while(x)
	{
		int t=f[x];
		if(t&&ls[t]!=x&&rs[t]!=x) 
		{
			int s=gtmx(T[x]);w[t].a[0][0]-=s;w[t].a[0][1]-=s;
			w[t].a[1][0]-=max(T[x].a[0][0],T[x].a[0][1]);
			up(x);
			s=gtmx(T[x]);w[t].a[0][0]+=s;w[t].a[0][1]+=s;
			w[t].a[1][0]+=max(T[x].a[0][0],T[x].a[0][1]);
		}
		else up(x);
		x=t;
	}
}
void sol()
{
	n=rd();cc=0;
	rep(i,1,n)hd[i]=d[i]=vis[i]=f[i]=ls[i]=rs[i]=0;
	rep(i,2,n)fa[i]=rd(),add(fa[i],i);
	pre(1,0);int rt=tbuild(1),lf=2;
	rep(i,2,n)
	{
		if(i>2)lf+=1-(d[fa[i]]==1);
		w[i].a[0][0]=0;w[i].a[0][1]=0;
		w[i].a[1][0]=1;w[i].a[1][1]=-inf;
		upd(i);d[i]++;d[fa[i]]++;
		if(i>3&&lf==i-1)printf("%d ",3);
		else printf("%d ",i-gtmx(T[rt])+1);
	}
	puts("");
}
int main(){int T=rd();while(T--)sol();return 0;}
