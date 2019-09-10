#include<bits/stdc++.h>
using namespace std;
struct h{
	double a;
	int n;
};
h p1[200000];
h p2[200000];
int main(){
	vector<h> ans;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p1[i].n>>p1[i].a;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>p2[i].n>>p2[i].a;
	int x=0;
	int y=0;
	while(1){
		if(x==n){
			for(int i=y;i<m;i++)
			ans.push_back(p2[i]);
			break;
		}
		else if(y==m){
			for(int i=x;i<n;i++)
			ans.push_back(p1[i]);
			break;
		}
		
		
		if(p1[x].n==p2[y].n){
			if(p1[x].a+p2[y].a!=0)
			ans.push_back(h{p1[x].a+p2[y].a,p1[x].n});
			x++;
			y++;
			continue;
		}
		else if(p1[x].n>p2[y].n){	
			ans.push_back(p1[x]);
			x++;
			continue;
		}
		else if(p1[x].n<p2[y].n){	
			ans.push_back(p2[y]);
			y++;
			continue;
		}
	}
	int k=ans.size();
	if(k)
	cout<<k<<" ";
	else
	cout<<k<<endl;
	for(int i=0;i<k-1;i++)
	printf("%d %.1f ",ans[i].n,ans[i].a);
	if(k-1>=0)
	printf("%d %.1f\n",ans[k-1].n,ans[k-1].a);
	return 0;
} 
//判断多项式的和为0的情况
//和多项式为0 
