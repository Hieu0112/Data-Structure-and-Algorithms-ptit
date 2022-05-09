#include<bits/stdc++.h>
using namespace std;
void nhap(long long a[],long &n){
	for(long i=0;i<n;i++)
	cin>>a[i];
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool check=false;
		long n,m,p;
		cin>>n>>m>>p;
		long long a[n],b[m],c[p];
		nhap(a,n);
		nhap(b,m);
		nhap(c,p);
		
		long long ab[n],abc[p];
		
		long x=0,y=0,h=0;
		while(x<n&&y<m){
			if(a[x]==b[y]) {
				check=true;
			ab[h++]=a[x];
			x++;
			y++;}
			else if(a[x]>b[y]) y++;
			else x++;
		}
		
		int x1=0,y1=0,h1=0;
		if(check){
			check=false;
		while(x1<h&&y1<p){
			if(ab[x1]==c[y1]) {
			check=true;
			abc[h1++]=ab[x1];
			x1++;
			y1++;
			}
			else if(ab[x1]>c[y1]) y1++;
			else x1++;
		}
	}
		if(check)
		for(long i=0;i<h1;i++)
		cout<<abc[i]<<" ";
		else cout<<"-1";
		cout<<endl;
	}
}
