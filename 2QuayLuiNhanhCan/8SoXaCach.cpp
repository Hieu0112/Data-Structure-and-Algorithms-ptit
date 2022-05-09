#include<bits/stdc++.h>
using namespace std;
int a[20],n;
bool OK;
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++)
	a[i]=i;
	OK=true;
}
void xuat(int *a,int n){
	bool check=true;
	string s="";
	for(int i=1;i<n;i++)
	{
		s+=to_string(a[i]);
		if(abs(a[i]-a[i+1])==1) {
		check=false; break;
		}
	}
	s+=to_string(a[n]);
	if(check)	cout<<s<<endl;
}

void solve(){
	int i=n;
	while(a[i]<a[i-1]&&i>0) i--;
	if(i==1) OK=false;
	else{
		int j=i,z=a[j];
		for(int h=i;h<=n;h++){
			if(a[h]>a[i-1]&&a[h]<z){
				j=h;
				z=a[j];
			}
		}	
			swap(a[i-1],a[j]);
			sort(a+i,a+n+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		while(OK){
			xuat(a,n);
			solve();
		}
	}
}