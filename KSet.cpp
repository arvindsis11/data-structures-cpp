//check if kth bit is 1--+ more efficient solution;+ count 1's
#include<iostream>
#include<cmath>
using namespace std;
long long d2b(int n){
	long long bin=0;
	int rem=0,i=1;
	while(n!=0){
		rem=n%2;
		n/=2;
		bin+=rem*i;
		i*=10;
	}
	return bin;
}
int countSetBit(int n){
	long long bin=d2b(n);
	int count=0;
	while(bin!=0){
	if(bin%10==1)
	count++;
	bin=bin/10;	
	}
	return count;
}
bool isSet(int n,int k){
	if(n==0) return false;
	long long bin=d2b(n);
	long long obin=bin;
	int count=1;
	while(bin!=0){
	count++;
	bin=bin/10;	
	}
	bin=obin;
	int nc=count-k;
	int rem=0;
	if(k<=(count-1)){
	while(nc>0){
	rem=bin%10;
	cout<<rem;
	bin/=10;
	nc--;	
	}
  }
	if(rem==1) return true;
	return false;
}
int main(){
	cout<<d2b(15)<<endl;
	if(isSet(15,2)) cout<<"yes";
	else cout<<"no";
	int n=5,k=3;//using left shift...
	if(n&(1<<(k-1))!=0){
	cout<<"yes";	
	}
	else cout<<"no";
	//using right shift...
	int x=5;
	//cout<<x;
	n=13,k=3;
	cout<<sizeof(x);
	if((n>>(k-1)&1)==1) cout<<"yes";
	else cout<<"no";
	cout<<"count the no of 1's ..."<<endl;
	int s=15;
	cout<<"total 1's here is: "<<s<<" = "<<countSetBit(s)<<endl;
	cout<<"using bitwise operands..."<<endl;
	int cnt=1,cnt2=0;
	while(cnt<=32){
	if((s>>(cnt)&1)==1) cnt2++;
	cnt++;	
	}
	cout<<"outside "<<cnt2<<endl;
	return 0;
}
