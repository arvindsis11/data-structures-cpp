//absolute value find
#include<iostream>
using namespace std;
int absolute(int n){
	if(n>=0) return n;
	return -n;
}
int main(){
	cout<<"enter a num: "<<endl;
	int n;
	cin>>n;
	if(n>=0)
	cout<<"absolute is num itself: "<<absolute(n);
	else
	cout<<"absolute of num is: "<<absolute(n);
	return 0;
}
