//check prime efficient way
#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n==1)
	return false;
	if(n==2||n==3)
	return true;
	if(n%2==0||n%3==0)
	return true;
	for(int i=5;i*i<=n;i=i+6){
		if(n%i==0||n/(i+2))
		return false;
	}
	return true;
}
int main(){
	cout<<isPrime(133);
	return 0;
}
