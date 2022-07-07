//find odd occurences
#include<iostream>
using namespace std;
int findOdd(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		res=res^arr[i];
	}
	return res;
}
int main(){
	int arr[]={1,1,2,3,3,2,5,5,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<findOdd(arr,n)<<endl;
}
