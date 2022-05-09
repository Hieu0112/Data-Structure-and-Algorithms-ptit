#include<bits/stdc++.h>
using namespace std;
int a[20],check[20],arr[20];
int n,stt;
void nhap(){
	stt=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	check[i]=false;
	}
	check[n]=false;
}
void checks(int *arr,int n){
	bool checkstt=false;
	stt++;
	for(int i=0;i<n;i++)
	if(a[i]!=arr[i]) {
	checkstt=true;
	break;
	}
	
	if(!checkstt) {
	cout<<stt<<endl;
	return ;
	}
}
void solve(int i){
	for(int j=1;j<=n;j++){
		if(!check[j]){
			check[j]=true;
			arr[i]=j;
			if(i==n-1) checks(arr,n);
			else solve(i+1);
			check[j]=false;
		}
	}
}
main()
{
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(0);
	}
}