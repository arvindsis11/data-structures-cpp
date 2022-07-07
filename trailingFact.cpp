//count trailing zeros in factorial
#include<iostream>
using namespace std;
long fact(long n){
	long sum=1;
	for(int i=2;i<=n;i++){
		sum*=i;
	}
	return sum;
}
int countTrail(long n){
	int count=0;
	while(n%10==0){
		count++;
		n/=10;
	}
	return count;
}
int main(){
	cout<<fact(20)<<" ";
	cout<<countTrail(fact(10));
	return 0;
}
