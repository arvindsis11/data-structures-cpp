//sum of digits iterative solution
#include<iostream>
using namespace std;
int sumDigits(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	cout<<sumDigits(11101);
	return 0;
}
