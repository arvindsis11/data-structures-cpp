//count trailing zeros using prime factors of 5
#include<iostream>
using namespace std;
int main(){
int n,res=0;
cin>>n;
for(int i=5;i<=n;i=i*5){
	res+=n/i;
}
cout<<res;
return 0;
}
