//matrix multiplication:
#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
	cout<<"enter row and col for first matrix..."<<endl;
	cin>>r1>>c1;
	cout<<"enter row and col for second matrix..."<<endl;
	cin>>r2>>c2;
	while(c1!=r2){
	cout<<"error! in data enter row and col...col of 1st should equal to row of second!"<<endl;
	cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;	
	}
	cout<<"enter a: "<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter b: "<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>b[i][j];
		}
	}
	cout<<"initializing c with 0"<<endl;
		for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			c[i][j]=0;
		}
	}
	cout<<"matrix multiplication"<<endl;
		for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			for(int k=0;k<c1;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
	cout<<"initializing c with 0"<<endl;
		for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
