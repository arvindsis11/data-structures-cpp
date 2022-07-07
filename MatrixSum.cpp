//adding elements of an matrix
//matrix basics
#include<iostream>
using namespace std;
void MatrixAdd(int a[][100],int b[][100],int row,int col){
	int sum[row][col];
    for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		sum[i][j] = a[i][j]+b[i][j];
	}
}	
	cout<<"display matrix..."<<endl;
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int row,col;
	cout<<"enter the size of matrix! row/col"<<endl;
	cin>>row>>col;
	int a[100][100],b[100][100];
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
	MatrixAdd(a,b,row,col);
	return 0;
}
