//check if a num is armstrong or not!
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
	cout<<sum<<"sum"<<endl;
	if(sum==org) return true;
	return false;
}
int main(){
	int n;
	cout<<"enter a number! "<<endl;
	cin>>n;
	if(isArmstrong(n)) cout<<"a armstrong number...:)"<<endl;
	else cout<<"not a armstrong :("<<endl;
	return 0;
}
