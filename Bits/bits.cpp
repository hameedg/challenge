#include<iostream>
using namespace std;

bool check_kth_bit(int n, int k){
    int x = 1<<k-1;//for right shift n>>k-1
    if((x&1)!=0) return true;
    else return false;

}
int main()
{
    int n,k;
    cout<<"Enter n and k:"<<endl;
    cin>>n>>k;
    cout<<check_kth_bit(n,k);
 return 0;
}