#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ropecuttting(int n, int a, int b, int c){
if(n==0) return 0;
if(n<=-1) return -1;

int res = max(ropecuttting(n-a,a,b,c),max(ropecuttting(n-b,a,b,c),ropecuttting(n-c,a,b,c)));
if(res==-1) return -1;
return res+1;
}
int main()
{
    int n,a,b,c;
    cout<<"Enter n , a , b , c ::"<<endl;
    cin>>n>>a>>b>>c;
    cout<<ropecuttting(n,a,b,c);
 return 0;
}

//time complexity O(3^n) but we have a better approach in dp