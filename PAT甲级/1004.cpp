#include<bits/stdc++.h>
#define maxn 200
using namespace std;
struct h{
	int i;
	int v;
};
vector<int>a[maxn];
//int in[maxn];
int out[maxn];
int c[maxn];
int m,n;
int bfs(){
	queue<h>p;
	p.push(h{1,0});
	h x;
	while(!p.empty()){
	    x=p.front();
		p.pop();
		if(out[x.i]==0)
		c[x.v]++;
		for(int i=0;i<a[x.i].size();i++){
			p.push(h{a[x.i][i],x.v+1});
		}
	}
	return x.v;
}
int main(){
	cin>>n>>m;
	while(m--){
		int x;
		int num;
		cin>>x>>num;
		while(num--){
			int y;
			cin>>y;
			a[x].push_back(y);
			out[x]++;
			//in[y]++;
		}	
	}
	int k=bfs();
	for(int i=0;i<k;i++)
	cout<<c[i]<<" ";
	cout<<c[k];
	return 0;
} 
