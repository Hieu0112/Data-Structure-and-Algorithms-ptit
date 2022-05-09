#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int a[20],arr[20];
set<int>arrs;

void nhap()
{
	cin>>n>>k;
	arrs.clear();
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arrs.insert(x);
	}
	int j=0;
	for(set<int>::iterator it=arrs.begin();it!=arrs.end();it++)
	arr[j++]=*it;
	n=j;
}
void xuat(int a[],int k)
{
	for(int i=1;i<=k;i++)
	cout<<arr[a[i]-1]<<" ";
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
	nhap();
	solve(1);
}
