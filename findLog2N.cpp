//find log2N using recursion
#include<iostream>
using namespace std;
int findLog2(int n){
	if(n==1) return 0;
	return 1+findLog2(n/2);
}
int main(){
	cout<<findLog2(16);
	return 0;
}
