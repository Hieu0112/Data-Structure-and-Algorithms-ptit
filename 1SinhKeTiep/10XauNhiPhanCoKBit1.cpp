#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
void nhap()
{
	cin>>n>>k;
}
void xuat(int a[],int n)
{
	int dem=0;
	string s="";
	for(int i=0;i<n;i++){
	if(a[i]==1) dem++;
	s+=(char)(a[i]+'0');
	}
	if(dem==k) cout<<s<<endl;
}
void solve(int i)
{
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==n-1) xuat(a,n);
		else solve(i+1);
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		solve(0);
	}
}
