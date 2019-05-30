//endl perfroms flush automatically
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
unordered_map<int,int>S;
int HCF(int arr[],int n,int n1,int n2,int n3,int n4){
	for(int i=0;i<n;i++){
		if(n1%arr[i]==0&&n2%arr[i]==0&&n3%arr[i]==0&&n4%arr[i]==0){
			return arr[i];
		}
	}
}
int findleft(int arr[],int n1,int brr[],int n2){
	for(int i=0;i<n1;i++){
	S[arr[i]]=1;	
	}
	for(int i=0;i<n2;i++){
	S[brr[i]]+=1;	
	}
	for(int i=0;i<n1;i++){
		if(S[arr[i]]==1){
			return arr[i];
		}
	}
}
int main(){
	int order[5];
	int arr[]={7,8,9,10,16,43};
	cout<<"Enter the products of "<<endl;
	int n1,n2,n3,n4;
	cout<<"1 2"<<endl; cin>>n1; cout<<endl;
	cout<<"1 3"<<endl; cin>>n2; cout<<endl;
	cout<<"1 4"<<endl; cin>>n3; cout<<endl;
	cout<<"1 5"<<endl; cin>>n4; cout<<endl;
	int first=HCF(arr,6,n1,n2,n3,n4);
	order[0]=first;
	order[1]=n1/order[0];
	order[2]=n2/order[0];
	order[3]=n3/order[0];
	order[4]=n4/order[0];
	int r=findleft(arr,6,order,5);
	cout<<"The order is "<<endl;
	for(int i=0;i<5;i++){
		cout<<order[i]<<" ";
	}
	cout<<r;
	return 0;
}
