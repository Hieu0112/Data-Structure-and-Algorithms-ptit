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
	string s="";
	int t;
	if(a[1]==0) check=false;
	else if(a[n]==1) check=false;
	else{
	for(int i=1;i<n;i++){
		if(a[i]==0){
			int x=0;
			for(int j=i;j<=n;j++)
			if(a[j]==1) break;
			else x++;
			if(x>3) check=false;
		}
		
		if(a[i]==1&&a[i+1]==1) check=false;
		
		if(a[i]==0) t=6;
		else t=8;
		s+=to_string(t);
	}
	if(a[n]==0) t=6;
	else t=8;
	s+=to_string(t);
	}
	if(check) cout<<s<<endl;
}
void solve(int i)
{
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==n) xuat(a,n);
		else solve(i+1);
	}
}
main()
{
	nhap();
	solve(1);
}
