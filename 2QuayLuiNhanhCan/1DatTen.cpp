#include<bits/stdc++.h>
using namespace std;
bool OK=false;
string a[50],arr[50];
int n,k,m;
set<string>s;
int To_Hop[30];

void sinh(){
	for(int i=1;i<=k;i++)
	To_Hop[i]=i;
}
void nhap(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
	cin>>a[i];
	s.insert(a[i]);}
	
	int j=0;
	for(set<string>::iterator it=s.begin();it!=s.end();it++)
	arr[j++]=*it;
	m=s.size();
}
void xuat(){
	for(int i=1;i<=k;i++) cout<<arr[To_Hop[i]-1]<<" ";
    cout<<endl;
}

void Sinh_Ke_Tiep(){
	int i=k;
	while(To_Hop[i]==m-k+i)	i--;
	if(i==0) OK=true;
	else{
		To_Hop[i]++;
		for(int j1=i+1;j1<=k;j1++)
			To_Hop[j1]=To_Hop[j1-1]+1;
	}
}
main()
{	
	nhap();
	sinh();
	while(!OK){
		xuat();
		Sinh_Ke_Tiep();
	}	
}
