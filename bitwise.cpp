//bitwise operators application
#include<iostream>
#include<cmath>
using namespace std;
int d2b(int n){
	long long bin;
	int i=1;
	while(n!=0){
		bin+=n%2*i;
		n/=2;
		i*=10;
	}
	return bin;
}
int b2d(long long n){
   int dec=0,rem=0,i=0;
   while(n!=0){
   	rem=n%10;
   	n/=10;
   	dec+=rem*pow(2,i);
   	i++;  	
   }
   return dec;	
}
int main(){
	int n=15;
	cout<<d2b(15)<<endl;
	cout<<b2d(1112);
	return 0;
}
