//gcd using euclidian algo.
#include<iostream>
using namespace std;
int main(){
	int a=100,b=200;
	while(a!=b){
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	cout<<a;
}
