#include<bits/stdc++.h>
using namespace std;
int a[20],n,k,dem=0;
int arr[20];
void nhap(){
	cin>>n>>k;
	a[0]=0;
	for(int i=1;i<=n;i++)
	cin>>arr[i];
}
void check_xuat(int *a,int k){
	bool kt=true;
	for(int i=1;i<k;i++)
	if(arr[a[i]]>=arr[a[i+1]]){
		kt=false;
		break;
	}
	if(kt) dem++;
}

void solve(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) check_xuat(a,k);
		else solve(i+1); 
	}
}

main()
{
	nhap();
	solve(1);
	cout<<dem;
}