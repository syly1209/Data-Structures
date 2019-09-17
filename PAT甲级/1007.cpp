#include<bits/stdc++.h>
using namespace std;
int dp[20000];
int a[20000];
int main(){
	int n;
	bool f=0;
	int maxn=-10086;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=0)
		f=1;
	}
	if(f==0){
	   cout<<"0 "<<a[1]<<" "<<a[n];
	   return 0;
	}
	for(int i=1;i<=n;i++)
	dp[i]=max(dp[i-1]+a[i],a[i]);	
	for(int i=1;i<=n;i++)
	maxn=max(maxn,dp[i]);
	int l;
	for(int i=1;i<=n;i++){
		if(dp[i]==maxn){
			l=i;
			break;
		}
	}
	int r;
	int ans=0;
	for(int i=l;i>=1;i--){
		ans+=a[i];
		if(ans==maxn){
			r=i;
			break;
		}
	}
	cout<<maxn<<" "<<a[r]<<" "<<a[l];
	return 0;
}
