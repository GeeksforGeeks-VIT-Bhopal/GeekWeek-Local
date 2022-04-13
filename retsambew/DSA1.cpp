#include<bits/stdc++.h>
using namespace std;const int N=125,V=N*N*N;typedef long long ll;struct P{int x,y;}a[N];inline void in(P&a){scanf("%d%d",&a.x,&a.y);}
inline P operator-(const P&a,const P&b){return (P){a.x-b.x,a.y-b.y};}inline ll cross(const P&a,const P&b){return 1ll*a.x*b.y-1ll*b.x*a.y;}
P X;inline int getqua(const P&a){if(a.x>0 && a.y>=0)return 1;if(a.x<=0 && a.y>0)return 2;if(a.x<0 && a.y<=0)return 3;return 4;}
inline bool cmp1(const P&a,const P&b){int oa=getqua(a-X),ob=getqua(b-X);return oa==ob?cross(a-X,b-X)>0:oa<ob;}
inline bool cmp2(const P&a,const P&b){return a.x==b.x?a.y<b.y:a.x<b.x;}int n,K,i,j,k,l,r,rk[N][N],aa[N];bool bb[N];struct node{int l,r,d,v;ll w,tg;}t[V*20];int tcnt;
int merge(int x,int y,ll tx,ll ty){
	if(!x && !y)return 0;int z=++tcnt;
	if(!x || (y && tx+t[x].tg+t[x].w<ty+t[y].tg+t[y].w))swap(x,y),swap(tx,ty);
	if(!y){t[z]=t[x];t[z].tg-=ty;return z;}
	t[z]=node{t[x].l,merge(t[x].r,y,tx+t[x].tg,ty),0,t[x].v,t[x].w,t[x].tg-ty};t[t[z].r].tg+=ty;
	if(t[t[z].r].d>t[t[z].l].d)swap(t[z].l,t[z].r);t[z].d=t[t[z].r].d+1;return z;
}
ll dis[V];int rt[V],vcnt=1,id[N][N];
struct info{int u;ll w1,w2;};
inline bool operator<(const info&a,const info&b){return a.w1+a.w2<b.w1+b.w2;}
priority_queue<info>q;
int main(){
	scanf("%d%d",&n,&K);for(i=1;i<=n;++i)in(a[i]),aa[i]=i;
	for(i=1;i<=n;++i){
		int xb=0;for(j=1;j<=n;++j)if(i!=j)rk[i][++xb]=j;
		X=a[i];sort(rk[i]+1,rk[i]+xb+1,[&](int x,int y){return cmp1(a[x],a[y]);});
	}
	sort(aa+1,aa+n+1,[&](int x,int y){return cmp2(a[x],a[y]);});
	for(i=1;i<=n;++i){
		int u=aa[i];
		for(k=1;k<n;++k){
			static int L[N],R[N];int cl=0,cr=0,v=rk[u][k],p,w;if(!bb[v])continue;
			for(p=1;rk[v][p]!=u;++p);
			for(j=p+1;j==n?j=1:0,j!=p;++j)if(bb[w=rk[v][j]]){
				ll t=cross(a[v]-a[u],a[w]-a[u]);
				if(t<0)L[++cl]=w;if(t>0)R[++cr]=w;
			}
			t[++tcnt]=node{0,0,1,1,0,0};int z=tcnt;
			for(l=r=1;r<=cr;++r){
				id[v][R[r]]=++vcnt;
				for(;l<=cl && cross(a[R[r]]-a[v],a[L[l]]-a[v])>0;++l)
					t[++tcnt]=node{0,0,1,id[L[l]][v],dis[id[L[l]][v]],0},z=merge(z,tcnt,0,0);
				dis[vcnt]=t[z].w+t[z].tg;rt[vcnt]=merge(t[z].l,t[z].r,0,0);
				if(rt[vcnt])t[rt[vcnt]].tg-=dis[vcnt];
				rt[vcnt]=merge(rt[vcnt],rt[t[z].v],0,0);
				dis[vcnt]+=cross(a[v]-a[u],a[R[r]]-a[u]);
				q.push(info{-vcnt,dis[vcnt],0});
			}
		}
		bb[u]=1;
	}
	for(;!q.empty() && K--;){
		info u=q.top();printf("%lld ",u.w1+u.w2);q.pop();i=u.u;
		if(i<0){i=-i;if(rt[i])q.push(info{rt[i],dis[i],t[rt[i]].w+t[rt[i]].tg});}else{
			j=t[i].v;if(rt[j])q.push(info{rt[j],u.w1+u.w2,t[rt[j]].w+t[rt[j]].tg});
			j=merge(t[i].l,t[i].r,0,0);if(j)t[j].tg+=t[i].tg,q.push(info{j,u.w1,t[j].w+t[j].tg});
		}
	}
	for(;K-->0;)printf("-1 ");puts("");
}
