#include<bits/stdc++.h>
using namespace std;
main() {
	int t,n,x,mod=1e9+7;
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
			s=(s + (a + b)%mod)%mod;
			Q.push((a + b)%mod); 
		}
		cout <<s<< endl;
	}
}
