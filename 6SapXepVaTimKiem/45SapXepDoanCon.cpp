#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n;
	cin>>t;
	vector<pair<int,int>>arr;
	vector<int>v;
	while(t--){
		arr.clear();
		v.clear();
		cin>>n;
		int x,a[n];
		for(int i=0;i<n;i++){
			cin>>x;
			arr.push_back({x,i});
		}
		
		sort(arr.begin(),arr.end());
		
		int dem=0,maxs=0;
		
		for(int i=0;i<n-1;i++){
			maxs=max(maxs,arr[i].second);
			if(maxs==i){
				dem++;
				v.push_back(i+1);
			}
		}
		cout<<dem<<endl;
		
		for(auto k:v){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}