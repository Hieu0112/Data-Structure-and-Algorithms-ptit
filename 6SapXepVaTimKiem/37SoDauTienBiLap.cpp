#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long arr[n];
		long k=-1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		if(arr[i]==arr[j]){
			k=arr[i];
			break;
		}
		if(k!=-1) break;}
		if(k==-1) cout<<"NO";
		else cout<<k;
		cout<<endl;
	}
 } 
