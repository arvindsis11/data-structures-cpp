//recursive solution to check if given string is pallindrom or not;
#include<iostream>
using namespace std;
int palindrome_check(string s, int start, int end)
{
//    if(end-start==1 || start==end)
//    {
//        return 1;
//    }
if(start>=end) return 1;
//    else
//    {
//        if(s[start]==s[end])
//        {
//            return palindrome_check(s,start+1,end-1); 
//        }
//        else
//        {
//            return 0;
//        }
//    }
return  palindrome_check(s,start+1,end-1)&&(s[start]==s[end]);
}
int main()
{
   string s;
   cin>>s;
   int n=s.length();
   if(palindrome_check(s, 0, n-1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}
