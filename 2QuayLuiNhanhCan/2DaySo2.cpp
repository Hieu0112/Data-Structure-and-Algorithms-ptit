#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	vector<int>arr;
	
	while(t--)
	{
		int n,x;
		cin>>n;
		int a[n][n];
		int h=0;
		arr.clear();
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr.push_back(x);
		}
		while(true){
		for(int i=0;i<arr.size();i++)
		a[h][i]=arr[i];
		h++;
		if(arr.size()==1) break;
		else{
		for(int i=0;i<arr.size()-1;i++)
		arr[i]=arr[i]+arr[i+1];
		arr.pop_back();
		}
		}
		int k=1;
		for(int i=h-1;i>=0;i--){
		cout<<"[";
		for(int j=0;j<k-1;j++)
		cout<<a[i][j]<<" ";
		cout<<a[i][k-1]<<"]";
		k++;
		cout<<" ";}
		cout<<endl;
	}
}