#include<iostream>
using namespace std;
//this palindrome is for strings
bool palindrome(string &str, int start, int end){
    if(start >= end){
        return true;
    }
    return (str[start]==str[end])&&(palindrome(str,start+1,end-1));
}
int main()
{
string s;
cout<<"Enter String"<<endl;
cin>>s;
int l=s.length();
//cout<<l<<endl;
//cout<<s[l-1]<<endl;
cout<<bool(palindrome(s,0,l-1));    
 return 0;
}
