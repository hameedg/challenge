#include<iostream>
using namespace std;
int search(int arr[], int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
        return -1;
}
int main()
{
int n, arr[100], x;
cout<<"Enter size:"<<endl;
cin>>n;
cout<<"Enter elements:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<"Enter element to be searched::"<<endl;
cin>>x;
cout<<search(arr,n,x);
 return 0;
}