//count set bits in a integer
#include<iostream>
using namespace std;
int main(){
	int n=5,count=0;
	while(n>0){
		if(n%2!=0) count++;
		n=n/2;
	}
	cout<<count<<endl;
}
