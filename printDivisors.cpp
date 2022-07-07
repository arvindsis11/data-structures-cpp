//print all the divisiors of the given num
#include<iostream>
using namespace std;
void printDiv(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0) cout<<i<<" ";
	}
}
int main(){
	printDiv(100);
}
