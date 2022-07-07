//different approach to find lcm
#include<iostream>
using namespace std;
int findLcm(int a,int b){
	int res = max(a,b);
	while(true){
		if(res%a==0&&res%b==0)
		return res;
		res++;
	}
	//return res;
	
}
int main(){
	cout<<findLcm(4,6);
	return 0;
}
