//fibbonacci using an array
#include<iostream>
using namespace std;
int fibnacci(int n){
  int arr[n+1];
  arr[0]=0;
  arr[1]=1;
  cout<<arr[0]<<" "<<arr[1]<<" ";
  for(int i=2;i<=n;i++){
  	arr[i]=arr[i-1]+arr[i-2];
  	cout<<arr[i]<<" ";
  }
  return arr[n];
}
int main(){
int n=7;
cout<<fibnacci(n);  	
}	
