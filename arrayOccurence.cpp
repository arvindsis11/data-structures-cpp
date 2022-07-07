//find odd occurance in an array
#include<iostream>
using namespace std;
//int findOdd()
int countOc(int arr[],int n,int k){
	int res=0;
	for(int i=0;i<n;i++){
		if(arr[i]==k) res++;
	}
	return res;
}
int main(){
	 int arr[] = { 2, 3, 5, 4, 5, 2,4, 3, 5, 2, 4, 4, 2 };
	int n=sizeof(arr)/sizeof(int);
	//cout<<countOc(arr,n,3)<<endl;
//	for(int i=0;i<n;i++){
//		
//		int count=countOc(arr,n,arr[i]);
//		if(count%2!=0)
//		cout<<arr[i]<<" ";
//	}
for (int i = 0; i < n; i++) {
         
        int count = 0;
         
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            cout<<arr[i]<<" ";
    }
	
}
