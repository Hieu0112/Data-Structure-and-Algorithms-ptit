#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,maxs=INT_MIN;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			maxs=max(maxs,a[i]);
		}
		if(maxs<=0) cout<<maxs;
		else{
			int max1=0,max2=0;
			for(int i=0;i<n;i++){
				max1+=a[i];
				if(max1<=0)	max1=0;
				max2=max(max1,max2);
			}
		cout<<max2;
		}
		cout<<endl;
	}
}