#include<bits/stdc++.h>
#include<string>
using namespace std;
int pos=1;
int find1=0;
int main(){
	cout<<"Enter the size and the string";
	int n; char A[100000];
	cin>>n; cin>>A;
	char B[100000];
	char C[100000];
	int max=0;
	for(int i=1;i<n;i*=2){
		int ct=1;
		strncpy(B,A,i);
		strcpy(C,"");
		for(int j=0;j<=n/pow(2,i-1);j++){
			strcat(C,B);
			if(!strcmp(C,A)){
			int q=n/strlen(B);
			int x=1;
			while(pow(2,x)!=q){
				x+=1;
			}
			cout<<x;
			pos=0;
			find1=1;
			break;
		}
		}
		if(pos==0){
			break;
		}
		ct+=1;
	}
	if(find1==0){
		cout<<0;
	}
	return 0;
}
