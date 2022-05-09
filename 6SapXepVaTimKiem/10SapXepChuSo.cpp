#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		set<int>arr;
		for(int i=0;i<n;i++){
		cin>>a[i];
		int x=a[i];
		if(arr.size()<10)
		while(x!=0){
		int so=x%10;
		arr.insert(so);
		x/=10;
			}
		}
		for(set<int>::iterator it=arr.begin();it!=arr.end();it++)
		cout<<*it<<" ";
		arr.clear();
		cout<<endl;
	}
}
