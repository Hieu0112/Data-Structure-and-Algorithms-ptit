#include<bits/stdc++.h>
using namespace std;
string s,a,b;
long k,sum,a1,a2;
long Doi_10(string tr,int k){
	int n=tr.size();
	long ss=0;
	int as;
	for(int i=0;i<=n-1;i++){
	if(tr[i]<='9') as=tr[i]-'0';
	else as=tr[i]-'A'+10;
	ss+=as*pow(k,n-1-i);
}
	return ss;
}
void nhap(){
	cin>>k>>a>>b;
	long a1=0,b1=0;
	a1=Doi_10(a,k);
	a2=Doi_10(b,k);
	sum=a1+a2;
}
string CoSo(long n,int k){
	s="";
	while(n!=0){
		int m=n%k;
		int m1=m; 
		if(m>=10) m1='A'-10+m;
		else m1='0'+m;
		s=char(m1)+s;
		n/=k;
	}
	return s;
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		cout<<CoSo(sum,k)<<endl;
	}
}