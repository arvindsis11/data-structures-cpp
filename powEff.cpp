//iterative binary exponentiation
#include<iostream>
using namespace std;
int pow(int x,int n){
	int res=1;
	while(n>0){
		if(n%2!=0){
		res=res*x;
		x=x*x;
		n=n/2;	
	}
}
	return res;
}
int main(){
	cout<<pow(2,3);
	return 0;
}
