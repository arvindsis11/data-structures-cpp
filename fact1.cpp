//factorial of num+ factorial using recursion!
#include<iostream>
using namespace std;
int factRec(int n){
	if(n==0)
	return 1;
	return factRec(n-1)*n;
}
int fact1(int n){
	int sum=1;
 for(int i=1;i<=n;i++){
 	sum*=i;
 }	
 return sum;
}
int main(){
cout<<fact1(5)<<" ";
cout<<factRec(5);	
}
