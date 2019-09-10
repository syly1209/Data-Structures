#include<iostream>
using namespace std;
int main(){
	union p{
		int k;
		char c[2];
	}u;
	u.k=10000000000;
	cout<<sizeof(u);
} 
