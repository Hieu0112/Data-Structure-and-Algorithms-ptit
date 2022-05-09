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
		arr.clear();
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr.push_back(x);
		}
		while(true){
		cout<<"[";
		for(int i=0;i<arr.size()-1;i++)
		cout<<arr[i]<<" ";
		cout<<arr[arr.size()-1];
		cout<<"]";
		cout<<endl;
		if(arr.size()==1) break;
		else{
		for(int i=0;i<arr.size()-1;i++)
		arr[i]=arr[i]+arr[i+1];
		arr.pop_back();
		}
		}
	}
}