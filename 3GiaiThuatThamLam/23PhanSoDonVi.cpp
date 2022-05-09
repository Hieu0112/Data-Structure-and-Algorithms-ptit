#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long tu,mau;
		cin>>tu>>mau;
		while(true){
			if(mau%tu==0){
				cout<<1<<"/"<<mau/tu<<endl;
				break;
			}
//			2 / 3
//			res=2
//			tu=4-3=1
//			mau=3*2=6;
//			--> 1 / 6
			else{
				long res=mau/tu+1;
				cout<<1<<"/"<<res<<" + ";
				tu=tu*res-mau;
				mau*=res;
			}
		}
	}
}