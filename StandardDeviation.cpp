//program to calculate standard deviation using arrays
#include<iostream>
#include<cmath>
using namespace std;
float calcSD(float arr[],int n){
	float sum=0.0,mean=0.0,sd=0.0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	mean = sum/n;
	for(int i=0;i<n;i++){
		sd+=pow(arr[i]-mean,2);
	}
	return sqrt(sd/n);
}
int main(){
	int n=20;
	float arr[n];
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	cout<<"standard deviation is: "<<calcSD(arr,n)<<endl;
	return 0;
}
