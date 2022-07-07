//find missing no in an array
#include<iostream>
using namespace std;
void missing(int arr[],int n){
	int min=999999;
	int max=-99999;
	for(int i=0;i<n;i++){
		if(arr[i]<min) min=arr[i];
		else if(arr[i]>max) max=arr[i];
	}
	cout<<"check arr: "<<arr[0]<<endl;
	for(int i=0;i<n;i++){
		for(int j=min;j<=max;j++){
		if(arr[j]!=j)
		cout<<j<<endl;	
		}
	}
	cout<<"min: "<<min<<" max: "<<max;
}
int main(){
	int arr[]={1,2,3,5,6,7};
	int n=sizeof(arr)/sizeof(int);
	missing(arr,n);
	
}
