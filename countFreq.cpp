//find the frequency of charactors in a string
#include<iostream>
using namespace std;
int main(){
	string str = "this is arvind sisodiya...from computer sssscience";
	char ch[] = "aabcddkdkssdfld";
	int sz = sizeof(ch)/sizeof(char);
	int count=0;
	char check ='s';
	cout<<sz<<"--size--"<<(ch[sz-1]=='\0')<<endl;
	for(int i=0;ch[i]!='\0';i++)
	if(str[i]==check) count++;
	cout<<"frequency of char:in c style "<<check<<" is = "<<count<<endl;
	count=0;
	for(int i=0;i<str.length();i++)
	if(str[i]==check) count++;
	cout<<"frequency of char: "<<check<<" is = "<<count<<endl;
	return 0;
}
