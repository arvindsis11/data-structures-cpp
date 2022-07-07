//generate powerset
#include<iostream>
#include<cmath>
using namespace std;

int main(){
string s="123";
int n=s.length();
int powSize=  pow(2,n);
for(int count=0;count<powSize;count++){
	for(int j=0;j<n;j++){
		if((count&(1<<j))!=0)
		 cout<<s[j];
	}
	cout<<" ";
}
return 0;	
}
