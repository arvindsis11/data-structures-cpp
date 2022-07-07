//using xor find two odds
#include<iostream>
using namespace std;
int main(){
	int arr[] = {3,4,3,4,2,4,4,5,7,7};
	int n = sizeof(arr)/sizeof(int);
	int xo = 0,res1=0,res2=0;
	for(int i=0;i<n;i++){
		xo=xo^arr[i];
	}
	cout<<xo<<"/";
	cout<<(2|5)<<"/";
	int sn = xo&~(xo-1);
	for(int i=0;i<n;i++){
	if((arr[i]&sn)!=0)
	res1=res1^arr[i];
	else
	res2 = res2^arr[i];
	}
	cout<<res1<<" "<<res2;
	return 0;
}
