//some array operations
#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n){
	int org=n,last=0,count=0,rem,sum=0;
	while(n!=0){
		n/=10;
		count++;
	}
	n=org;
	while(n!=0){
		rem=n%10;
		sum+=round(pow(rem,count));
		n/=10;
}
	if(sum==org) return true;
	return false;
}
int main(){
	int n;
	cout<<"enter the last rang: "<<endl;
	cin>>n;
	int arr[n];
	int size=sizeof(arr)/sizeof(int);
	cout<<size<<endl;
	for(int i=0;i<size;i++) arr[i]=-1;
	//for(int x:arr) cout<<x<<" ";
	for(int i=0;i<size;i++){
		if(isArmstrong(i)) 
		{
			arr[i]=i;
	    	//cout<<i<<" ";	
		}
	}
	for(int i=0;i<size;i++){
		if(arr[i]==152)
		cout<<"found"<<endl;
	}
	for(int x:arr) cout<<x<<" ";
	return 0;
}
