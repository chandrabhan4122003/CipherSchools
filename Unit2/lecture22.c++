#include<iostream>
using namespace std;
int main(){
    // int a;
    // int *ptr;
    // a=10;
    // ptr=&a;
    int a,b,c;
    int *p,*q;
    p=&a; //p stores the address of p
    q=&b;
    a=1;
    b=6;
    c=*p+*q;

    
   // *p=3; // you can change dynamically also
    cout<<"the value of a is (from the actual variable type)"<<a<<endl;
    cout<<"the value of a from the pointer using * "<<*p<<endl;
    // b=*p;       //a=b
    cout<<"the value of c is "<<c<<endl;

}