#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(auto &i:a) cin>>i;
		sort(a,a+n,greater<int>());
		int left=0,right=n/2;
		int counts=0;
		while(left<n/2&&right<n){
			if(a[right]*2<=a[left]){
				counts++;
				left++;
				right++;
			}
			else right++;
		}
		cout<<n-counts<<endl;
	}
}