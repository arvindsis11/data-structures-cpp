//fibonacci series using tmp vars
#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==0||n==1)
	return n;
	int a=0,b=1;
	int next=a+b;
	for(int i=2;i<=n;i++){
	    next=a+b;
	    a=b;
	    b=next;
	}
	return next;
}
int main(){
	cout<<fibonacci(7);
	return 0;
}
