#include<bits/stdc++.h>
#define maxn 510
#define inf 1<<29
using namespace std;
struct h{
	int e;
	int v;
};
vector<h>p[maxn];
bool vis[maxn];
int d[maxn];
int ph[maxn];
int a[maxn];
int pc[maxn];
int n,m,c1,c2;
void dj(){
	for(int i=0;i<n;i++){
		vis[i]=0;
		d[i]=inf;
		pc[i]=0;
		ph[i]=0;
	}
	d[c1]=0;
	pc[c1]=a[c1];
	ph[c1]=1;
	while(1){
		int minn=inf;
		int u=-1;
		for(int i=0;i<n;i++){
			if(minn>d[i]&&vis[i]==0){
				minn=d[i];
				u=i;
			}
		}
		if(u==-1)
		break;
		vis[u]=1;
		for(int i=0;i<p[u].size();i++){
		    int t1=p[u][i].v+d[u];
		    int t2=pc[u]+a[p[u][i].e];
		    if(t1<d[p[u][i].e]){
		    	d[p[u][i].e]=t1;
		    	pc[p[u][i].e]=t2;
		    	ph[p[u][i].e]=ph[u];
		    }
		    else if(t1==d[p[u][i].e]){
		    	ph[p[u][i].e]+=ph[u];
		        pc[p[u][i].e]=max(pc[p[u][i].e],t2);	
		    }		
		}
	}
}
int main(){
	cin>>n>>m>>c1>>c2;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		p[x].push_back(h{y,z});
		p[y].push_back(h{x,z});
	}
	dj();
	cout<<ph[c2]<<" "<<pc[c2]<<endl;
	return 0;
}
