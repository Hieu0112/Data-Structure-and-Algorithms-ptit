#include<bits/stdc++.h>
using namespace std;
int a[20],n;
char x,x1='A'-1;
bool OK=true;
void nhap(){
	cin>>x;
	n=x-x1;
	for(int i=0;i<n;i++)
	a[i]=i+1;
}
void xuat(int *a,int n){
	string s="";
	s+=char(a[0]+x1);
	bool check=true;
	for(int i=1;i<n-1;i++){
	s+=char(a[i]+x1);
	if(char(a[i]+x1)=='A')
		if(char(a[i-1]+x1)!='E'&&char(a[i+1]+x1)!='E') check=false;
		
	if(char(a[i]+x1)=='E')	
		if(char(a[i-1]+x1)!='A'&&char(a[i+1]+x1)!='A') check=false;
	
	}
	s+=char(a[n-1]+x1);
	if(check) cout<<s<<endl;
}
void solve(){
	int i=n-1;
	while(a[i]<a[i-1]&&i>0)	i--;
	if(i==0) OK=false;
	else{
		int j=a[i],k=a[i-1],z=i;
		for(int h=i;h<n;h++){
			if(a[h]>k&&a[h]<j){
				z=h;
				j=a[h];
			}
		}
		swap(a[i-1],a[z]);
		sort(a+i,a+n);
	} 
}
main(){
	nhap();
	while(OK){
		xuat(a,n);
		solve();
	}
}