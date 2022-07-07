//sum of digits using recursive call
#include<iostream>
using namespace std;
int sumDigits(int n){
	if(n==0) return n;
	return n%10+sumDigits(n/10);
}
int main(){
	cout<<sumDigits(9987);
	return 0;
}
