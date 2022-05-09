#include<bits/stdc++.h>
using namespace std;
int n;
int *a=new int[1];
void nhap(){
	cin>>n;
	for(int i=0;i<n;i++)
	*(a+i)=0;
}
void xuat(){
	bool check=true;
	for(int i=0;i<=n/2;i++)
	if(*(a+i)!=*(a+n-i-1)){
		check=false;
		break;
	}
	if(check){
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;}
}

void solve(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n-1)
		xuat();
		else solve(i+1);
	}
}
main(){
	nhap();
	solve(0);	
} 

