//cpp program to check even or odd
#include<iostream>
using namespace std;
bool isEven(int n){
	if(n%2==0) return true;
	return false;
}
int main(){
cout<<"enter a num: "<<endl;
int n;
cin>>n;
if(isEven(n)) cout<<"even!";
else cout<<isEven(n)<<"odd!";
return 0;	
}
