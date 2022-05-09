#include<bits/stdc++.h>
using namespace std;
int a[20],arr[20],n,k;
bool ok;
void nhap(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ok=false;
	sort(arr,arr+n);
}

void xuat(int *a,int n){
	int s=0;
	string str="";
	for(int i=0;i<n;i++){
	if(a[i]==1) {
	s+=arr[i];
	str+=to_string(arr[i])+" ";}
	}
	if(s==k){
		ok=true;
		str.erase(str.size()-1);
		cout<<"[" <<str<<"]"<<" ";	
	}
}
void solve(int i){
	for(int j=1;j>=0;j--)
	{
		a[i]=j;
		if(i==n-1) xuat(a,n);
		else solve(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(0);
		if(!ok) cout<<"-1";
		cout<<endl;
	}
}