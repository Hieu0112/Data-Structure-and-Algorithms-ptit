//#include<bits/stdc++.h>
//using namespace std;
//int t,n,a[20];
//vector<string>arr;
//void nhap(){
//	arr.clear();
//	cin>>n;
//}
//void Cong(int n1){
//	string s="";
//	for(int i=1;i<=n1;i++)
//	s+=to_string(a[i])+" ";
//	s.pop_back();
//	arr.push_back(s);
//}
//void solve(int x,int k,int s){
//	for(int i=x;i>=1;i--){
//		a[k]=i;
//		if(i==s) Cong(k);
//		else if(s>i)
//		 solve(i,k+1,s-i);
//	}
//}
//main(){
//	cin>>t;
//	while(t--)
//	{
//		nhap();
//		solve(n,1,n);
//		cout<<arr.size()<<endl;
//		for(int i=0;i<arr.size();i++)
//		cout<<"("<<arr[i]<<")"<<" ";
//		cout<<endl;
//	}
//}

#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>>arr;
vector<int>a;
void nhap()
{
	arr.clear();
	a.clear();
	cin>>n;
}
void KQ(){
		arr.push_back(a);
}
void solve(int sum,int k){
	for(int i=k;i>=1;i--){
		if(sum==i) {
			a.push_back(i);
			KQ();
			a.pop_back();
			}
		else if(sum>i){
			a.push_back(i);
			solve(sum-i,i);
			a.pop_back();
		}
	}
}
void xuat(){
	cout<<arr.size()<<endl;
	for(int i=0;i<arr.size();i++)
	{	cout<<"(";
		for(int j=0;j<arr[i].size()-1;j++)
		cout<<arr[i][j]<<" ";
		cout<<arr[i][arr[i].size()-1];
		cout<<") ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(n,n);
		xuat();
		cout<<endl;
	}
}