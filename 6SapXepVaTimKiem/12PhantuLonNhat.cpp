#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>k;
		multiset<int>arr;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr.insert(x);
		}
		for(multiset<int>::reverse_iterator it=arr.rbegin();it!=arr.rend();it++)
		{
			cout<<*it<<" ";
			k--;
			if(k==0) break;
		}
		cout<<endl;
	}
}
