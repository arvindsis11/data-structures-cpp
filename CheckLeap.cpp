//program to check leap year
#include<iostream>
using namespace std;
bool isLeap(int n){
	if(n%4==0&&n%100!=0||n%400==0) return true;
	return false;
}
int main(){
	int n;
	cout<<"enter a num: "<<endl;
	cin>>n;
	if(isLeap(n))
	cout<<"a leap year!"<<endl;
	else cout<<"Not a leap year! "<<endl;
	
}
