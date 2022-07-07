//only one odd occuring element in an array
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,3,2,1,5,5,5,3};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		int count=0,tmp;
		for(int j=0;j<n;j++)
		if(arr[i]==arr[j]) count++;
		if(count%2!=0) {
			tmp=arr[i];
			cout<<tmp<<" ";
		}
		
	}
}
