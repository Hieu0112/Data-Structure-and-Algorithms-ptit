#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
bool check[20]={};
void nhap()
{
	cin>>n;
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];
	cout<<" ";

}
void solve(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==false){
			check[j]=true;
			a[i]=j;
			if(i==n-1) xuat(a,n);
			else solve(i+1);
			check[j]=false;
		}
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
