//print divisors in O(sqrt(n)) time
#include<iostream>
#include<Math.h>
using namespace std;
void printDiv(int n){
	int last=n;
	int count=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0) cout<<i<<" ";
	}
	for(int i=sqrt(n)-1;i>=1;i--){
		if(n%i==0)
		cout<<n/i<<" ";
	}
	}
int main(){
	printDiv(100);
	return 0;
}
