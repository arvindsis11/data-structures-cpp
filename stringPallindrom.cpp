//iterative solution to check if a given string is palindrom or not
#include<iostream>
using namespace std;
bool isPalindrom(string str){
	if(str.length()<0) return false;
	string rev="";
	for(int i=str.length()-1;i>=0;i--){
		rev+=str[i];
	}
	cout<<"rev--"<<rev<<" str--"<<str<<endl;
	if(rev==str) return true;
	return false;
}
int main(){
	string str="arvind";
	cout<<isPalindrom(str);
	if(isPalindrom(str)) cout<<"palindrom";
	else cout<<"not a pallindrom!";
	return 0;
}
