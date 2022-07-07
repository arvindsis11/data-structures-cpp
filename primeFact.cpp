//find the prime factors 
#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n==1) return false;
	if(n==2||n==3) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<n;i=i+6){
		if(n%i==0||n%(i+2)==0)
		return false;
	}
	return true;
}
void printPrime(int n){
	for(int i=2;i<=n;i++){
		if(isPrime(i)&&n%i==0){
			cout<<i<<" ";	
		}
	}
}
int main(){
	int n,num;
	do{
	cout<<"enter a num: "<<endl;
	cin>>n;
	if(isPrime(n))
	cout<<"prime num"<<endl;
	else
	cout<<"not a prime"<<endl;
	cout<<"printing prime till n..."<<endl;
	printPrime(n);
	cout<<"enter 1 to exit 0 to continue: "<<endl;
	cin>>num;
   }while(num==0);
}
