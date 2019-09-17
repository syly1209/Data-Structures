#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+3];
	int b[n+3];
	a[0]=0;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	b[i]=a[i]-a[i-1];
	long long ans=0;
	for(int i=1;i<=n;i++){
		if(b[i]>0)
		ans+=(6*b[i]);
		else
		ans+=(4*abs(b[i]));
		ans+=5;
	}
	cout<<ans;
	return 0;
}
