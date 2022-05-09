#include<bits/stdc++.h>
using namespace std;
main(){
	int t,x;
	int a[50];
	set<int>arr;
	int n,k;
	cin>>t;
	while(t--){
		arr.clear();
		x=-1;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
		cin>>a[i];
		arr.insert(a[i]);
		}
		bool ok=true;
		int j=k;
		while(j>0&&a[j]==n-k+j) j--;
		if(j==0) ok=false;
		else{
			a[j]++;
			for(int h=j+1;h<=k;h++)
			a[h]=a[h-1]+1;
		}
		if(!ok) cout<<k;
		
		else
		{
			int dem=0;
			for(int i=1;i<=k;i++){
			int m=arr.size();
			arr.insert(a[i]);
			if(m!=arr.size()) dem++;
		}
		cout<<dem;
		}
		cout<<endl;
	}
}