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
	for(int i=0;i<n;i++)
	if(a[i]==0) cout<<"A";
	else cout<<"B";
	cout<<" ";
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
		cout<<endl;
	}
}
