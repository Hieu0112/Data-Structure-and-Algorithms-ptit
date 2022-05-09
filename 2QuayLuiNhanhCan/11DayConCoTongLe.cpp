#include<bits/stdc++.h>
using namespace std;
int n,a[20],arr[20];
void nhap(){
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,greater<int> ());
}
void xuat(int *arr,int n){
	int dem=0;
	string s="";
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1){
		dem+=a[i];
		s+=to_string(a[i])+" ";
		}
	}	
	if(dem%2!=0) cout<<s<<endl;
}
void solve(int i){
	for(int j=0;j<=1;j++){
		arr[i]=j;
		if(i==n-1) xuat(arr,n);
		else solve(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(0);
	}
}