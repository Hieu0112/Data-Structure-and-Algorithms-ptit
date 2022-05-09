//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t,n,s;
//	cin>>t;
//	while(t--){
//		s=0;
//		cin>>n;
//		vector<int>a(n);
//		for(int i=0;i<n;i++)
//		cin>>a.at(i);
//		while(a.size()>1){
//			sort(a.begin(),a.end());
//			a[0]+=a[1];
//			s+=a[0];
//			a.erase(a.begin()+1);
//		}
//		cout<<s<<endl;
//	}
//}
#include<iostream>
#include<queue>

using namespace std;


int main() {
	int t,n,x;
	long long s,a,b;
	cin >> t;
	while(t--) {
		s=0;
		priority_queue<long long, vector<long long>, greater<int>> Q;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			Q.push(x);
		}
		while(Q.size() > 1){
			a = Q.top();
			Q.pop();
			b = Q.top();
			Q.pop();
			s+= a + b;
			Q.push(a + b); 
		}
		cout <<s<< endl;
	}
}
