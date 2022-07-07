//efficient solution to find the lcm using euclidian algo
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int main(){
	cout<<"enter a number to calc gcd and lcm: "<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"gcd of these two is: "<<gcd(a,b);
	cout<<"\n";
	cout<<"lcm of these two is: "<<lcm(a,b);
	return 0;
}
