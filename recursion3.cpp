//recursion
#include<iostream>
using namespace std;
void printN(int n){
	if(n==0) return;
	printN(n-1);
	cout<<n<<" ";
	printN(n-1);
}
int main(){
	printN(3);
	return 0;
}
