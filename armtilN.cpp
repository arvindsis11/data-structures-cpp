//display armstrong between two intervals
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
	cout<<"enter the interval u want armstrong numbers: "<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"list of armstrong numbers: "<<endl;
	for(int i=a;i<=b;i++){
		if(isArmstrong(i))
		cout<<i<<" ";
	}
	return 0;
}
