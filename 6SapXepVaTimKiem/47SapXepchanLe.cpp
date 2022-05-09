#include<bits/stdc++.h>
using namespace std;

main()
{
	int n,x=0,y=0;
	cin>>n;
	
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	if(i%2==0) b[x++]=a[i];
	else c[y++]=a[i];
	 
	sort(b,b+x);
    sort(c,c+y);
	 
	int x1=0,y1=y-1;
	for(int i=0;i<n;i++)
	if(i%2==0) cout<<b[x1++]<<" ";
	else cout<<c[y1--]<<" ";
} 

