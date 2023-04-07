#include<iostream>
using namespace std;

void print1ton(int n){
    if(n==0) return;
    print1ton(n-1);
    cout<<n<<endl;
}
void printnto1(int n){
    if(n==0) return;
    cout<<n<<endl;
    printnto1(n-1);
}
int recur_sum(int n){
    if(n==0) return 0;

    return n + recur_sum(n-1);
}
int sumofdigits(int n){
    if(n<=9) return n; 
    return sumofdigits(n/10) + n%10;
}
int main()
{
    int n;
    cout<<"Enter::"<<endl;
    cin>>n;
    //print1ton(n);
    //printnto1(n);
    //cout<<recur_sum(n);
    cout<<sumofdigits(n); 

 return 0;
}