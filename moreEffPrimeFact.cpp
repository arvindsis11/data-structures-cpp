//more efficient solution to find prime factors
#include<iostream>
using namespace std;
void printPrimeF(int n){
	if(n<=1) return;
	while(n%2==0){
		cout<<"2"<<" ";
		n=n/2;
	}
	while(n%3==0){
		cout<<"3"<<" ";
		n=n/3;
	}
	for(int i=5;i*i<=n;i=i+6){
		while(n%i==0){
			cout<<i<<" ";
			n=n/i;
		}
		while(n%(i+1)==0){
			cout<<i+1<<" ";
			n=n/i+1;
		}
	}
	if(n>3)
	cout<<n;
}
int main(){
	printPrimeF(450);
	return 0;
}
