//program to find prime no.
#include<iostream>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<n;i++){
	 if(n%i==0)
	 return false;	
	}
	return true;
}
int main(){
	cout<<isPrime(13);
}
