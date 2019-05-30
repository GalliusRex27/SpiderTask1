#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int> SCN;
	vector<int> con;
	cout<<"Enter n,r,x,y"<<endl;
	int n,r,x,y;
	int ini;
	cin>>n; cin>>r; cin>>x; cin>>y;
	ini=r;
	if(n==0){
		cout<<"no change";
		return 0;
	}
	cout<<"Enter if the contest takes place or not"<<endl;
	for(int i=0;i<n;i++){
		int x1;
		cin>>x1;
		con.push_back(x1);
	}
	cout<<"Enter if he eats SCN or not"<<endl;
	for(int j=0;j<n;j++){
			int x1;
		cin>>x1;
		SCN.push_back(x1);
		if(x1==1&&con[j]==1){
			r+=x;
		}
		if(x1==0&&con[j]==1){
			r-=y;
		}
	}
	if(r>ini){
		cout<<"promoted";
	}
	else if(r<ini){
		cout<<"demoted";
	}
	else{
		cout<<"no change";
	}
	return 0;
}
