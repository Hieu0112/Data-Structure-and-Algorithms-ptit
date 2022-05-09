#include<bits/stdc++.h>
using namespace std;
int a[20],arr[20];
int n,stt,k;
void nhap(){
	stt=0;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	cin>>a[i];
	arr[0]=0;
}
void checks(int *arr,int k){
	bool checkstt=false;
	stt++;
	for(int i=1;i<=k;i++)
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
	for(int j=arr[i-1]+1;j<=n-k+i;j++){
			arr[i]=j;
			if(i==k) checks(arr,k);
			else solve(i+1);
		}
}
main()
{
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(1);
	}
}