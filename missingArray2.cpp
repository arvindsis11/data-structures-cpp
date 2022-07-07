#include<iostream>
using namespace std;
int missingNum(int arr[],int n){
	int total = (n+1)*(n+2)/2;
	for(int i=0;i<n;i++){
		total-=arr[i];
	}
	return total;
}
int main(){
	int arr[]={1,2,3,4,5,6,8};
	int n=sizeof(arr)/sizeof(int);
	cout<<missingNum(arr,n);
	
}
