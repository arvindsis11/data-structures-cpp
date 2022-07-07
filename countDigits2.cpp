//recursive solution to count digits
#include<iostream>
using namespace std;
int count(int n){
	if(n==0)
	return 0;
	return 1+count(n/10);
}
int main(){
	int n=123455;
	cout<<count(n);
	return 0;
}
