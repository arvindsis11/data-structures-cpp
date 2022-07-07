//recursive function -- sum of first n natural numbers
#include<iostream>
using namespace std;
int sum(int n){
	if(n<=1) return n;
	else 
	return n+sum(n-1);
}
int main(){
	int n=15;
	cout<<sum(n)<<" ";
	cout<<((n*(n+1))/2);
	return 0;
}
