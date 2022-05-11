#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
string a[10111];
int n;
void nhap(){
		cin>>n;
		for(int i=0;i<n;i++)	cin>>a[i];
}
int doi_so(string s){
	int res=0;
	for(auto x:s)	res=res*10+(x-'0');
	return res;
}
bool dau(string s){
	if(s=="+"||s=="-"||s=="*"||s=="/")
		return true;
	return false;
}
int result(int i){
	if(dau(a[i])){
	if(a[i]=="+")	return result(2*i+1)+result(2*i+2);
	if(a[i]=="-")	return result(2*i+1)-result(2*i+2);
	if(a[i]=="*")	return result(2*i+1)*result(2*i+2);
	if(a[i]=="/")	return result(2*i+1)/result(2*i+2);
	}
	else return doi_so(a[i]);
	return 0;
}
main(){
	test(){
	nhap();
	cout<<result(0);
	cout<<endl;
	}
}