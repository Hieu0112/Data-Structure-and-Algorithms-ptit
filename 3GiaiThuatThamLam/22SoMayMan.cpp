#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n;
	bool check;
	cin>>t;
	while(t--){
		cin>>n;
		int so4=0,so7=0;
//		4a+7b=n
		check=true;
		for(int i=0;i<=n/4;i++)
		{
			int s=n-4*i;
			if(s%7==0&&s>0){
				so4=i;
				so7=s/7;
				check=false;
				break;
			}
		}
		if(check) cout<<"-1";
		else {
			while(so4--) cout<<4;
			while(so7--) cout<<7;
		}
		cout<<endl;
	}
}