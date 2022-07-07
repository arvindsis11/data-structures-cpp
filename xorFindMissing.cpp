//find the missing no in an array using xor
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,5,6,7,8};
	int n = sizeof(arr)/sizeof(int);
	int x1=0,x2=0;
	for(int i=0;i<n;i++){
	x1=x1^arr[i];	
	}
	for(int i=0;i<=n+1;i++){
	x2=x2^i;	
	}
	cout<<x1<<" ";
	cout<<x2<<" ";
	cout<<(x1^x2)<<endl;
}
