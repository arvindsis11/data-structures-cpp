//cpp program to reverse a number and check pallindrome in a given range
#include<iostream>
#include<vector>
using namespace std;
bool reverse(int n){
	int org=n,last,res=0;//123--321
	while(n!=0){
		last=n%10;
		res=res*10+last;
		n/=10;
	}
	if(res==org) return true;
	return false;
}
int main(){
	cout<<"enter a number: "<<endl;
	int n;
	cin>>n;
	cout<<reverse(n);
	cout<<"enter a and b: "<<endl;
	int a=1,b=1000;
	cin>>a>>b;
	int c;
    if((a-b)>0) c=a-b;
    else c=-(a-b);
    cout<<"c "<<c;
	//vector<int> vect(c,0);
	int arr[c];
	for(int i=0;i<c;i++){
	arr[i]=0;	
	}
	int arrlen = sizeof(arr)/sizeof(int);
	cout<<"\n";
	for(int i=a;i<arrlen;i++){
	if(reverse(i)){
	//arr[i]=i;	
	}
	for(int x:arr) cout<<x<<" ";
	//cout<<i<<" ";	
	}
	return 0;
}
