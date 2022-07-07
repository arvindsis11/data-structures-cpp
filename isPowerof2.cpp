//check if a given number is of power of two or not;
#include<iostream>
#include<cmath>
using namespace std;
bool isPower(int n){
	for(int i=0;i<n/2;i++){
	int x=pow(2,i); 
	if(n==x) return true;	
	}
	
	return false;
}
bool powerOf2(int n){
	while(n!=1){
		if(n%2!=0) return false;
		n/=2;
	}
	return true;
}
bool powerOf2new(int n){
	if(n==0) return false;
	return (n&(n-1)==0);
}
int main(){
	cout<<isPower(32)<<endl;
	return 0;
}
