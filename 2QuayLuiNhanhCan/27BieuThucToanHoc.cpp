#include<bits/stdc++.h>
using namespace std;
bool check;
int a[10],t,arr[10];
vector<vector<int>>Dau;
vector<int>dau;
bool ok[10]={};

void solve_Dau(){
	for(int j=1;j<=3;j++){
		dau.push_back(j);
		if(dau.size()==4) Dau.push_back(dau);
		else solve_Dau();
		dau.pop_back();
	}
}
void nhap(){
	for(int i=0;i<5;i++)	cin>>a[i];
}
void KT(){
	for(int i=0;i<Dau.size();i++){
		int s=a[arr[0]];
		for(int j=0;j<Dau[i].size();j++){
			if(Dau[i][j]==1) s+=a[arr[j+1]];
			if(Dau[i][j]==2) s-=a[arr[j+1]];
			if(Dau[i][j]==3) s*=a[arr[j+1]];
		}
		if(s==23){
			check=false;
			return ;
		}
	}
}
void solve_so(int i){
	if(!check) return ;
	for(int j=0;j<5;j++){
		if(!ok[j]){
			ok[j]=true;
			arr[i]=j;
			if(i==4) KT();
			else solve_so(i+1);
			ok[j]=false;
		}
	}
}
main(){
	cin>>t;
	solve_Dau();
	while(t--){
		dau.clear();
		check=true;
		nhap();
		solve_so(0);
		if(check) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}