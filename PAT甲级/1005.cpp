#include<bits/stdc++.h>
using namespace std;
string s[12]={"zero","one","two","three","four","five","six","seven","eight","nine"};
vector<int>a;
int main(){
	string k;
	cin>>k;
	int sum=0;
	for(auto i : k){
		sum+=(i-'0');
	}
	if(sum==0)
	a.push_back(0);
	while(sum){
		a.push_back(sum%10);
		sum/=10;
	}
	for(int i=a.size()-1;i>0;i--){
		cout<<s[a[i]]<<" ";
	}
	cout<<s[a[0]]<<endl;
	return 0;
}
