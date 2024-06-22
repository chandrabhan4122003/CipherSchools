//scale factor we have see that an inteffer value can be added to or subracted from a pinter variable
//in realinty,it is not the integer value which is added/subtracted but rather the scale factor times the value
//dereferenced pointer : finding the value of pointer (*d+1)
#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int *x;
    // x=&a;
    // cout<<"the address of a ,which is stored in the pointer x is "<<x<<"the value of of the a is "<<*x<<endl;
    // cout<<"dereferenced pointer : finding the value of pointer (*x+1) is "<<*x+1<<endl;
    // cout<<"value of x+1"<<x+1<<endl;
    // cout<<"value of x+2"<<x+2<<endl;
    int a[5];
    int *x=a;
    x=&a[0];
    int i;
    for(i=0;i<5;i++){
        cout<<&a[i]<<endl;
    }    

    return
    // int *p1,*p2;
    // int i=2;
    // int j=4;
    // p1=p1+1;
    // p2=p2+3;
    // p2++;
    // p2=p2-(i+j); 
}