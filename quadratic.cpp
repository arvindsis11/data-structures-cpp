//solving quadratic equations
#include<iostream>
#include<cmath>
using namespace std;
void quadratic(float a,float b,float c){
float x1,x2,real,img,disc;
disc = b*b-4*a*c;
if(disc>0){
	cout<<"roots are real and diff: "<<endl;
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl;
}
else if(disc==0){
	cout<<"roots are real and same: "<<endl;
	x1= -b/(2*a);
	cout<<"x1 = x2 = "<<x1<<endl;
}	
else{
	cout<<"roots are complex and different: "<<endl;
	real=-b/(2*a);
	img = sqrt(-disc)/(2*a);
	cout << "x1 = " << real << "+" << img << "i" << endl;
    cout << "x2 = " << real << "-" << img << "i" << endl;
}
}
int main(){
	float a,b,c;
	quadratic(2,2,2);
	return 0;
}
