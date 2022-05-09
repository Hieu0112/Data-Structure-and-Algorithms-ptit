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
		int a[n],b[n];
		int x=0,y=0;
		for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		if(a[i]!=b[i]){
			x=i+1;
			break;
		}
		
		for(int i=n-1;i>=0;i--)
		if(a[i]!=b[i]){
			y=i+1;
			break;
		}
		cout<<x<<" "<<y<<endl;
	}
}
