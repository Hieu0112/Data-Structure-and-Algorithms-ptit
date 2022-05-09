#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100009];
void nhap(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	cin>>a[i];
}

bool cmp(int x,int y){
	return abs(x-k)<abs(y-k);
}
main()
{
	int t;
	cin>>t;while(t--)
	{
	nhap();		
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	}
}
