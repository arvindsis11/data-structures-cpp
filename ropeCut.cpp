//rope cutting problem
#include<iostream>
using namespace std;
int ropCut(int n,int a,int b,int c){
	int a1=0,b1=0,c1=0;
	if(a==1||b==1||c==1) return n;
	for(int i=1;i<=n;i++){
		if(n>=(a*i)){
			a1++;
		}
		if(n>=(b*i)){
			b1++;
		}
		if(n>=(c*i)){
			c1++;
		}
	}
	return max(max(a1,b1),c1);
}
int main(){
	int n=100,a=9,b=8,c=3;
	cout<<"max "<<max(max(a,b),c)<<" ";
	cout<<ropCut(5,4,2,6);
	return 0;
}
