#include<iostream>
using namespace std;
int main(){
    // int arr[4];
    // for(int i=0;i<4;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" ";
    // }
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
}