//efficient prime factors
#include<iostream>
using namespace std;
void printPrimeFact(int n){
	if(n<=1) return;
	for(int i=2;i*i<n;i++){
		while(n%i==0){
			cout<<i<<" ";
			n=n/i;
		}
	}
	if(n>1)
	cout<<n;
}
int main(){
printPrimeFact(12);
return 0;	
}
