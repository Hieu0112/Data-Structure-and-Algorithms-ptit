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
		int a[n];
		int x=0,y=0,z=0;
		for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0) x++;
		else if(a[i]==1) y++;
		else z++;
	}
	
		while(x--) cout<<0<<" ";
		while(y--) cout<<1<<" ";
		while(z--) cout<<2<<" ";
		cout<<endl;
	}
}
