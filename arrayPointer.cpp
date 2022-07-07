//access elements using pointer in cpp
#include<iostream>
using namespace std;
int main(){
	int arr[] = {10,2,4,5,6,8,4,3,56,8};
	int* ptr = arr;
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	cout<<*(ptr+i)<<" ";
}
