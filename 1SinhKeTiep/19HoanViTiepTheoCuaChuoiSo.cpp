#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		string a;
		cin>>x;
		cin>>a;
		int j=a.size()-1;
		while(a[j]<=a[j-1]&&j>0)	j--;
		if(j==0){
			cout<<x<<" BIGGEST";
		}
		else{
			char x1=a[j];
			int m=j;
			for(int i=j;i<a.size();i++)
			{
				if(a[i]>a[j-1]&&a[i]<x1) {
					m=i;
					x1=a[i];
				}
			}
			swap(a[m],a[j-1]);
			for(int h=j;h<a.size()-1;h++)
			for(int k=h+1;k<a.size();k++)
			if(a[h]>a[k]) swap(a[h],a[k]);
			cout<<x<<" "<<a;
		}
		cout<<endl;
	}
}