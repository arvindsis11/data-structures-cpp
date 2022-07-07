//find log3N
#include<iostream>
using namespace std;
int finLog3(int n){
	if(n<3) return 0;
	return finLog3(n/3)+1;
}
int main(){
	cout<<finLog3(199)<<endl;
	return 0;
}
