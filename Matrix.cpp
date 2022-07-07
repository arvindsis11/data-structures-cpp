//matrix basics
#include<iostream>
using namespace std;
int MatrixAdd(int a[],int b[],int row,int col){
	
}
int main(){
	int row,col;
	cout<<"enter the size of matrix! row/col"<<endl;
	cin>>row>>col;
	int a[row][col],b[row][col];
	cout<<"enter  the elements in a[] matrix..."<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter  the elements in b[] matrix..."<<endl;
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>b[i][j];
		}
	}
	cout<<"display matrix..."<<endl;
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
