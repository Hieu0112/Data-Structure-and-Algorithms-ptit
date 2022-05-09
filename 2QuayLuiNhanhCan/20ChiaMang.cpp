#include<bits/stdc++.h>
using namespace std;
int n,k,s;
map<int,int>a;
void nhap(){
	s=0;
	a.clear();
	int x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		s+=x;
		a[x]++;
	}
}
bool solve(map<int,int>&a, int x,int y,map<int,int>::iterator o){
	if(x==k) return true;
	for(map<int,int>::iterator it=o;it!=a.end();it++)
		if((*it).second>0){
			y+=(*it).first;
			(*it).second--;
			if(y==s&&solve(a,x+1,0,a.begin())) return true;
			else if(y<s){
				if(solve(a,x,y,it)) return true;
			}
		y-=(*it).first;
		(*it).second++;
		}
	return false;
}
int check(int n,int k){
	if(k==1) return 1;
	else if(k>n) return 0;
	if(s%k!=0) return 0;
	return 2;
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		if(check(n,k)==1) cout<<1;
		else if(check(n,k)==0) cout<<0;
		else{
			s/=k;
			if(solve(a,0,0,a.begin())) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
}