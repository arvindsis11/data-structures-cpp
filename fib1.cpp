//fibonacci series upto n numbers
#include<iostream>
using namespace std;
void fib(int n){
	int t1=0,t2=1,nextTerm=t1+t2;
	for(int i=0;i<=n;i++){
	if(i==0){
	cout<<i<<" ";
	continue;	
	}
	if(i==1){
	cout<<i<<" ";
	continue;	
	}
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
		cout<<nextTerm<<" ";
	}
}
int main(){
	fib(5);
	return 0;
}
