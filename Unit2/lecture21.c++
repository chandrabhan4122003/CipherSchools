
//pointers :- it is a variable just like any variable 
// but it only store the address 
//type of a pointer :- pointer pointing to a address 

//usage of pointers 

#include<iostream>
using namespace std;
int main(){
        int a ;
        float b;
        cout<<"the address of a is "<<&a;
        cout<<"the address of b is "<<&b;
        int *ptr;
        float *ptr1;
        ptr=&a;
        ptr1=&b;

}