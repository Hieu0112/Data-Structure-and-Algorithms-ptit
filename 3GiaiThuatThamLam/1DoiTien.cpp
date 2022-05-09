#include<bits/stdc++.h>
using namespace std;
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n,counts;
void nhap(){
	cin>>n;
	counts=0;
}
int solve(int n){
	for(int i=sizeof(a)/sizeof(int)-1;i>=0;i--){
		int x=n/a[i];
		n-=x*a[i];
		counts+=x;
		if(n==0) break;
	}
	return counts;
}
main(){
	int t;
	cin>>t;
	sort(a,a+n,greater<int>());
	while(t--){
		nhap();
		cout<<solve(n)<<endl;
	}
}