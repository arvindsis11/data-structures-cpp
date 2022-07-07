//program to find hcf of a num
#include<iostream>
using namespace std;
void hcf(int a,int b){
	int c=(a>b)?b:a;
	int res=1;
	for(int i=2;i<=c;i++){
	if(a%i==0&&b%i==0){
	res=i;	
	}		
	}
	cout<<res;
}
int main(){
hcf(12,12);	
}
