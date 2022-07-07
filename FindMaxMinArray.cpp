//find largest element in an array
#include<iostream>
using namespace std;
void findMaxMin(int arr[],int n){
	int max=arr[0],min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min) min=arr[i];
		if(arr[i]>max) max = arr[i];
	}
	cout<<"min = "<<min<<": max = "<<max<<endl;
}
int main(){
	int arr[]={1,3,5,7,4,66,300,2};
	int n = sizeof(arr)/sizeof(int);
	findMaxMin(arr,n);
	return 0;
}
