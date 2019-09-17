#include<bits/stdc++.h>
using namespace std;
struct h{
	double i;
	int n;
};
double a1[3000];
double a2[3000];
double a[3000];
int main(){
	vector<h>p;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		double y;
		cin>>x>>y;
		a1[x]=y;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		int x;
		double y;
		cin>>x>>y;
		a2[x]=y;
	}
	for(int i=0;i<1005;i++){
		for(int j=0;j<1005;j++){
			a[i+j]+=a1[i]*a2[j];
		}
	}
	for(int i=2004;i>=0;i--){
		if(a[i]!=0){
			p.push_back(h{a[i],i});
		}
	}
	printf("%d",p.size());
	for(int i=0;i<p.size();i++)
	printf(" %d %.1f",p[i].n,p[i].i);
	return 0;
}
