//more optimized solution to calculate the power
#include<iostream>
using namespace std;
int powO(int x,int n){
	int res=1;
	while(n>0){
		if(n&1) res*=x;
		x*=x;
		n=n>>1;
	}
	return res;
}
int main(){
	cout<<"enter two numbers: "<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"power of these two is: "<<powO(a,b);
	return 0;
}
