//fibbonacci using recursion
#include<iostream>
using namespace std;
int fibnacci(int n){
	if(n==1||n==0)
	return n;
	return fibnacci(n-1)+fibnacci(n-2);
}
int main(){
	int n;
	cout<<"please enter a num: "<<endl;
	cin>>n;
	cout<<n<<"th term of fib series is: "<<endl;
	cout<<fibnacci(n);
}
