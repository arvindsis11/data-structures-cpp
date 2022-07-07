//brian kerningham algorithm
#include<iostream>
using namespace std;
int main(){
	int n=13,res=0;
	while(n>0){
	n=(n&(n-1));
	res++;	
	}
	cout<<res;
}
