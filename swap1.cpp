//simple program to swap two numbers
#include<iostream>
using namespace std;
void swap1(int a,int b){//simple swap
	int tmp=a;
	a=b;
	b=tmp;
	cout<<"a = "<<a<<":"<<"b = "<<b<<endl;
}
void swap2(int a,int b){
	//swap without tmp
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a = "<<a<<":"<<"b = "<<b<<endl;
}
void swap3(int* a,int* b){
	//swap using address;
	 int temp;
    temp = *b;//a-30 b-10 c-20
    *b = *a;
    *a = temp;
    //*c = temp;
	cout<<"a = "<<*a<<":"<<"b = "<<*b<<endl;
}
int main(){
	int a=50,b=80;
	cout<<"a = "<<a<<":"<<"b = "<<b<<endl;
	cout<<*(&a)<<endl;
	swap3(&a,&b);
	return 0;
}
