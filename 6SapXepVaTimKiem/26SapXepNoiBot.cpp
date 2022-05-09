#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x=1;
	while(true)
	{
		bool check=true;
		for(int i=0;i<n-1;i++)
		if(a[i]>a[i+1] ) swap(a[i],a[i+1]);
		
		for(int i=0;i<n-1;i++) {
		if(a[i]>a[i+1]) check=false;}
		
		cout<<"Buoc "<<x++<<": ";
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		
		if(check) break;
	}
}
