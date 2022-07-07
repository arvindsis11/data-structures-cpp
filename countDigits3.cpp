//logrithmic solution to count the digits
#include<iostream>
#include<Math.h>
using namespace std;
int count(int n){
	return floor(log10(n)+1);
}
int main(){
	cout<<count(12345);
}
