#include<bits/stdc++.h>
using namespace std;
int a[20];
set<string>arr;
int n=8;
void xuat(int *a,int n){
	bool check=true;
	
	for(int i=0;i<n;i++)
	if(a[i]==1) a[i]=2;
	
	if(a[2]*10+a[3]>12) check=false;
	if(a[4]*1000+a[5]*100+a[6]*10+a[7]<2000) check=false;
	if(a[0]==0&&a[1]==0)	check=false;
	if(a[2]==0&&a[3]==0)	check=false;
	if(check)
	{
		string s="";
		s=to_string(a[0])+to_string(a[1])+"/"+to_string(a[2])+to_string(a[3])+"/";
		for(int i=4;i<n;i++)
		s+=to_string(a[i]);
		arr.insert(s);
	}
}
void In(){
	for(set<string>::iterator it=arr.begin();it!=arr.end();it++)
	cout<<*it<<endl;
}
void Solve(int h){
	for(int i=0;i<2;i++)
	{
		a[h]=i;
		if(h==n-1) xuat(a,n);
		else Solve(h+1);
	}
}
main(){
	Solve(0);
	In();
}
