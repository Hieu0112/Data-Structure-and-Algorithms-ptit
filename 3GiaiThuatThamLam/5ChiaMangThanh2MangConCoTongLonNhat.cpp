#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n,k,s,s1;
	cin>>t;
	while(t--){
		s=0;
		s1=0;
		cin>>n>>k;
		k=min(k,n-k);
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<k;i++)
		{
			s1+=a[i];
		}
		cout<<s-2*s1<<endl;
	}
}