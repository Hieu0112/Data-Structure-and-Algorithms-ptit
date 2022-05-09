#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n,s,m,total_food,total_days;
	bool check;
	cin>>t;
	while(t--){
		check=true;
		total_days=0;
		total_food=0;
		cin>>n>>s>>m;
		for(int i=1;i<=s;i++){
			if(i%7!=0){
			total_food+=n;
			total_days++;
			}
			total_food-=m;
			if(total_food<0) {
			check=false;
			break;
		}
			if(total_food>=(s-i)*m) break;	
		}
		if(check) cout<<total_days;
		else cout<<"-1";
		cout<<endl;
	}
}