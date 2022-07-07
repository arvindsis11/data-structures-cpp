//program to calculate sum and average of an array
#include<iostream>
using namespace std;
float findAvg(float arr[],int n){
	float sum=0;
for(int i=0;i<n;i++){
	sum+=arr[i];
}	
return sum/n;
}
int main(){
	float arr[100];
	int n;
	cin>>n;
	while(n>100||n<=0){
		cout<<"error! please enter 1-100 "<<endl;
		cin>>n;
 }
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"average..."<<endl;
	cout<<findAvg(arr,n);
	return 0;
}
