#include<bits/stdc++.h>
using namespace std;
vector<long long>a;
long long kt[509];
void init(){
	queue<string>q;
	q.push("9");
	a.push_back(9);
	while(1){
		string top=q.front();
		q.pop();
		if(top.size()==16)break;
		a.push_back(stoll(top+"0"));
		a.push_back(stoll(top+"9"));
		q.push(top+"0");
		q.push(top+"9");
	}
	for(int i=1;i<=509;i++){
		for(auto x:a){
			
			if(x%i==0){
				kt[i]=x;
				break;
			}
		}
	}
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<kt[n]<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int n,A[50];
void in(int m)
{	
	cout<<"(";
	for(int i=1;i<m;i++)cout<<A[i]<<" ";
	cout<<A[m]<<") ";
}
void Try(int x,int i, int sum)//x :gia tri hien tai
{
	int j;
	for(j=x;j>=1;j--)
	{
		A[i]=j;
		//sum-=j;
		if(sum==j)in(i);
		else if(sum>j)
		{
			Try(j,i+1,sum-j);
//			sum+=j;
		}
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		Try(n,1,n);	
		cout<<endl;
	}
}
