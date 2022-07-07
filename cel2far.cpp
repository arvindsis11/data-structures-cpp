//program to convert celcius to farenhite
#include<iostream>
using namespace std;
float CeltoFare(float n){
	return n*1.8+32;	
}
float fare2cel(float n){
	return (n-32)*(float)5/(float)9;	
}
int main(){
	cout<<"enter a num: "<<endl;
	float n;
	cin>>n;
	float res=(float)5/(float)9;
	cout<<res<<" ";
	cout<<n<<" cel is = "<<CeltoFare(n)<<" F!"<<fare2cel(n)<<endl;
	return 0;
}
