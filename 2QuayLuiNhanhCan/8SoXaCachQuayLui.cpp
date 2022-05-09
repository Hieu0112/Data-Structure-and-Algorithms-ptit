#include<bits/stdc++.h>
using namespace std;
int a[20],n;
bool OK[20];
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++)	OK[i]=true;
}

void xuat(int *a,int n){
	bool check=true;
	string s="";
	for(int i=1;i<n;i++)
	{
		s+=to_string(a[i]);
		if(abs(a[i]-a[i+1])==1) {
		check=false; break;
		}
	}
	s+=to_string(a[n]);
	if(check)	cout<<s<<endl;
}

void solve(int i){
	
	for(int j=1;j<=n;j++)
	{
		if(OK[j]){
			OK[j]=false;
			a[i]=j;
			if(i==n) xuat(a,n);
			else solve(i+1);
			OK[j]=true;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(1);
	}
}