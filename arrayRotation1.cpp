//cyclically rotate an array by one
#include<iostream>
using namespace std;
int* rotate(int arr[],int n){
	int tmp=arr[n-1];
	for(int i=n-1;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=tmp;
	return arr;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(int);
	int* arr2=rotate(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
	cout<<"rotated array: "<<endl;
	return 0;
}
