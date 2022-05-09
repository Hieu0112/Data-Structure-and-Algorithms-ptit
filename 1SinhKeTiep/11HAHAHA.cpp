#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
void nhap()
{
	cin>>n;
}
void xuat(int a[],int n)
{
	bool check=true;
	
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==1&&a[i+1]==1){
			check=false;break;
		}
	}
	if(a[0]!=1||a[n-1]!=0) check=false;
	
	if(check){
	for(int i=0;i<n;i++)
	if(a[i]==0) cout<<"A";
	else cout<<"H";
	cout<<endl;
	}
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
