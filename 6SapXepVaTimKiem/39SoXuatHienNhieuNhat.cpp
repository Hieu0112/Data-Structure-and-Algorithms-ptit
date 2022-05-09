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
	map<int,int>a;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[x]++;
	}
	x=-1;
	for(map<int,int>::iterator it=a.begin();it!=a.end();it++)
	{
		if((*it).second>n/2) {
			x=(*it).first;
			break;
		}
	}
	if(x!=-1) cout<<x;
	else cout<<"NO";
	cout<<endl;
	}
}
