#include<bits/stdc++.h>
using namespace std;
int dem[100009]={};
int n;
int a[10009];
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	dem[a[i]]++;
	}
}
bool cmp(int x,int y)
{
	if(dem[x]!=dem[y]) return dem[x]>dem[y];
	else return x<y;
}
void xuat()
{
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	dem[a[i]]=0;}
	cout<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		sort(a,a+n,cmp);
		xuat();
	}
}
