//seive of erasthogenous
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
int main(){
	int n;
	cout<<"enter a number: "<<endl;
	cin>>n;
	bool arr[n+1];
	arr[0]=false;
	arr[1]=false;
	for(int i=2;i<=n;i++){
		arr[i]=true;
	}
	for(int i=2;i<=5;i++){
		for(int j=2;j<n;j++){
			if(i*j<=n){
		    arr[i*j]=false;	
			}	
		}	
		}
	for(int i=0;i<=n;i++){
		if(arr[i]&&isPrime(i))
		cout<<i<<" ";
	}
	return 0;
}
