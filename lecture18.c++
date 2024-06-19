#include<iostream>
using namespace std;

//call by value 
// void swap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"the values of a and b after swapping inside the function "<<a<<b;
// }
// int main(){
//     int a=4;
//     int b=6;
//     swap(a,b);
//     cout<<"the value of a and b after swapping is "<<a<<" "<<b;
// }

//call by reference 

void swap(int &a,int &b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main(){
    int x=5;int y=10;
    cout<<"before swap : "<<x<<" "<<y;
    swap(x,y);
    cout<<"after swap "<<x<<" "<<y;
}
