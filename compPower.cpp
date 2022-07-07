//compute power algo.
#include<iostream>
using namespace std;
int pow(int x,int n){
	int y=1;
	for(int i=0;i<n;i++){
		y=y*x;
	}
	return y;
}
int main(){
	cout<<pow(3,4);
}
