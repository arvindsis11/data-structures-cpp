//compute power efficiently
#include<iostream>
using namespace std;
int pow(int x,int n){
	if(n==0) return 1;
	int tmp=pow(x,n/2);
	tmp*=tmp;
	if(n%2==0) return tmp;
	else return tmp*x;
}
int main(){
	cout<<pow(2,4);
	return 0;
}
