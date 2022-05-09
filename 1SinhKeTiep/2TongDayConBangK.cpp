#include<bits/stdc++.h>
using namespace std;
int n,k,scount=0;
int *a=new int[1];
int *art=new int [1];

void nhap()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>art[i];
}
void xuat(int a[],int n){
	int dem=0;
	for(int i=1;i<=n;i++)
	if(a[i])
	dem+=art[i];
	if(dem==k){
	scount++;
	for(int i=1;i<=n;i++)
	if(a[i])
	cout<<art[i]<<" ";
	
	cout<<endl;
	}
}
void solve(int i)
{
	for(int j=0;j<=1;j++){
	a[i]=j;
	if(i==n) xuat(a,i);
	else solve(i+1);
	}
}
main()
{
	nhap();
	solve(1);
	cout<<scount;
}

