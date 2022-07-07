//Program to Generate Fibonacci Sequence Up to a Certain Number
#include<iostream>
using namespace std;
int printFib(int n){
	if(n==0||n==1)
	return n;
	int a=0,b=1;
	int next=a+b;
	for(int i=2;i<n;i++){
	    next=a+b;
	    a=b;
	    b=next;
	}
	return next;
}
int main(){
	int a=0,b=1,next=a+b,n=10;
	cout << "Fibonacci Series: using while loop " << a << ", " << b << ", ";
	while(next<n){
		cout<<next<<" ,";
		a=b;
		b=next;
		next=a+b;	
	}
	cout << "Fibonacci Series: using function call "<<endl;
	for(int i=0;i<n-2;i++){
		cout<<printFib(i)<<",";
	}
	return 0;
}
