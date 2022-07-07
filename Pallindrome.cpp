#include<iostream>
using namespace std;
int main(){
	int n,org,rev=0;
	cout<<"enter a num: "<<endl;
	cin>>n;
	org=n;
	while(n!=0){
		rev=rev*10+(n%10);
		n/=10;
	}
	if(rev==org)
	cout<<"P";
	else
	cout<<"NP";
}
