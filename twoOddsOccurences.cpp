//find two odd occuring numbers
#include<iostream>
using namespace std;
int* twoOdds(int arr[],int n){
	int arr2[2];
	for(int i=0;i<n;i++){
		int count=0,c=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]) count++;
		}
		if(count%2!=0){
		arr2[0]=arr[i];
		if(arr2[0]!=arr[i])	
		arr2[1]=arr[i];
		}
	}
	return arr2;
}
int main(){
	int arr[]={1,1,2,2,3,4,5,5};
	int n=sizeof(arr)/sizeof(int);
	int* ptr = twoOdds(arr,n);
	cout<<ptr[0]<<" "<<ptr[1];
	return 0;
}
