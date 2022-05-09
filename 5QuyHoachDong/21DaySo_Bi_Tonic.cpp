#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
main(){
	int xuoi[101],nguoc[101];
	test(){
		int n,maxs=0;
		cin>>n;
		int a[n];
		for(auto &x:a)	cin>>x;
		memset(xuoi,0,sizeof(xuoi));
		memset(nguoc,0,sizeof(nguoc));
		for(int i=0;i<n;i++){
			xuoi[i]=a[i];
			for(int j=0;j<i;j++)
				if(a[i]>a[j])	xuoi[i]=max(xuoi[i],xuoi[j]+a[i]);
		}
		for(int i=n-1;i>=0;i--){
			nguoc[i]=a[i];
			for(int j=n-1;j>i;j--)
				if(a[i]>a[j])	nguoc[i]=max(nguoc[i],nguoc[j]+a[i]);
		}
		for(int i=0;i<n;i++)
		maxs=max(maxs,xuoi[i]+nguoc[i]-a[i]);
		cout<<maxs<<endl;
	}
}