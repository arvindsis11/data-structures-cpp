//program to calculate the lcm
#include<iostream>
using namespace std;
void lcm(int a,int b){
	for(int i=2;i<=a*b;i++){
		if(i%a==0&&i%b==0){
		 cout<<i;
		 break;	
		}
	}
}
int main(){
	int a=11,b=33;
	lcm(a,b);
}
