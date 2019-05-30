#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<string>
//as shown in the example given along with the question, I am assuming 1000(8) can be given as 0111(7) and 1001(9) ie. preceeding 0s are included  
//IDEA- Average the string between predecessor  and successor(13=(12+14)/2)
using namespace std;
int main(){
	cout<<"Enter the size";
	int n; cin>>n;
	cout<<"Enter the string";
	char A[105];
	char B[105];
	char C[105];
	cin>>A;  //gets is throwing the result off
	if(strlen(A)!=n){
		cout<<"-1";
		return 0;
	}
	if(n==1&&strcmp(A,"0")==0){
		cout<<"-1";
		return 0;
	}
	set<char>s; set<char> :: iterator  it;
	for(int i=0;i<n;i++){
		s.insert(A[i]);
	}
	for(it=s.begin();it!=s.end();it++){;
	}
	if(s.size()==1){
		cout<<-1;
		return 0;
	}
	B[n]='\0';
	C[n]='\0';
	if(A[n-1]=='0'){
		for(int i=0;i<n;i++){
			if(i!=n-1){
				B[i]=A[i];
				C[i]=A[i];
			}
			else{
				B[i]='1';
				C[i]=A[i];
			}
		}
	int r=n-1;
	while(C[r]=='0'){
		C[r]='1';
		r--;
	}
	C[r]='0';
	}
		if(A[n-1]=='1'){
		for(int i=0;i<n;i++){
			if(i!=n-1){
				B[i]=A[i];
				C[i]=A[i];
			}
			else{
				B[i]='0';
				C[i]=A[i];
			}
		}
	int r=n-1;
	while(C[r]=='1'){
		C[r]='0';
		r--;
	}
	C[r]='1';
	}
	if(A[n-1]=='0'){
		cout<<B<<" "<<C;
	}
	else{
		cout<<C<<" "<<B;
	}
	return 0;
}
