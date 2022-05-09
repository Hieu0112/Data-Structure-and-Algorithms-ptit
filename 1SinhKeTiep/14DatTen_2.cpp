#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
char x='A';
void nhap()
{
	cin>>n>>k;
}
void xuat(int a[],int k)
{
	for(int i=1;i<=k;i++)
	cout<<(char)(x+a[i]-1);
	cout<<endl;
}
void solve(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k) xuat(a,k);
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
		solve(1);
	}
}
