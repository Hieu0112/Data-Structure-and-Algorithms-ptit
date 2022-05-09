#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[n],b[m];
		multiset<int>arr;
		for(int i=0;i<n;i++){
		cin>>a[i];
		arr.insert(a[i]);}
		
		for(int i=0;i<n;i++){
		cin>>b[i];
		arr.insert(b[i]);}
		
		for(multiset<int>::iterator it=arr.begin();it!=arr.end();it++)
		cout<<*it<<" ";
		arr.clear();
		cout<<endl;
	}
}
