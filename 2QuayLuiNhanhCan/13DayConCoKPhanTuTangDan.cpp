#include<bits/stdc++.h>
using namespace std;
int a[20],arr[20];
int n,k;
void nhap(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	arr[0]=0;
}

void checks(int *arr,int k){
	for(int i=1;i<=k;i++)
	cout<<a[arr[i]]<<" ";
	cout<<endl;
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