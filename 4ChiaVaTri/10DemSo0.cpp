#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test() int t;cin>>t;while(t--)
//main(){
//	test(){
//		int n;
//		cin>>n;
//		int a[n];
//		int x=0;
//		for(auto &i:a){
//			cin>>i;
//			if(i==0) x++;
//		}
//		cout<<x<<endl;
//	}
//}
//search_binary

int search_binary(int *a,int n){
	int left=0;
	int right=n-1;
	if(a[left]) return left;
	if(a[right]==0) return right+1;
	int mid=(left+right)/2;
	while(left<=right){
		if(a[mid]==0) left=mid+1;
		else if(a[mid]==1) right=mid-1;
		mid=(left+right)/2;
	}
	return mid+1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		cout<<search_binary(a,n)<<endl;
	}
}