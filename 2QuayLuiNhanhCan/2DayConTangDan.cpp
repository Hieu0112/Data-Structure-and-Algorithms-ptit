#include<bits/stdc++.h>
using namespace std;
int n;
int a[20],arr[20];
vector<int>v;
multiset<string>mul;
void nhap(){
	cin>>n;
	for(int i=0;i<n;i++) 
	cin>>arr[i]; 
	mul.clear();
}
void xuat(){
	v.clear();
	bool check=true;
	for(int i=0;i<n;i++)
	if(a[i]==1) v.push_back(arr[i]);
	
	if(v.size()>=2){
	for(int i=0;i<v.size()-1;i++)
	if(v[i]>v[i+1]){
		check=false;
		break;
	}
	if(check)
	{
	string xau="";
	for(int i=0;i<v.size();i++)
	xau+=to_string(v[i])+" ";
	mul.insert(xau);
	}
	}
}

void solve(int i){
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==n-1) xuat();
		else solve(i+1);
	}
}

main()
{
	nhap();
	solve(0);
	for(multiset<string>::iterator it=mul.begin();it!=mul.end();it++)
	cout<<*it<<endl;
}