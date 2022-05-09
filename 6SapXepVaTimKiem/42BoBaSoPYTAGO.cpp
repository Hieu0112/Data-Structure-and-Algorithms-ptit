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
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]*=a[i];
	}
	sort(a,a+n);
	int x=0,z=n-1,y=n-2;
	bool check=false;
	while(z>=2){
		if(a[x]+a[y]>a[z]) y--;
		else if(a[x]+a[y]<a[z]) x++;
		else{
			check=true;
			break;
		}
		if(x==y)
		{
			x=0;
			z--;
			y=z-1;
		}
	}
	if(check) cout<<"YES";
	else cout<<"NO";
	cout<<endl;}
}
