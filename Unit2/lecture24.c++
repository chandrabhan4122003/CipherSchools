//parameter passing and return
//pointer
// #include<iostream>
// using namespace std;
// void swap(int *x,int *y){  //a and b are different 
//     int c; // x and y are the pointers to a ,b --> they store the address of a and b
//     c=*x;
//     *x=*y;
//     *y=c;
//     cout<<"the swapping is completed"<<endl;
// }
// int main(){
//         int a,b;
//         a=3;
//         b=7;
//         swap(&a,&b);
//         cout<<"a="<<a<<endl;
//         cout<<"b="<<b<<endl;

// }

// array to a function
#include<iostream>
using namespace std;
float average(int x,float *x){  // or float average(int a,float x[])
    sum=sum+x[i];
}
int main(){
    int a[10];
    cout<<"the values for comparision"<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of address a[0] is "<<&a[0]<<endl;
    cout<<"the value of address a[1] is "<<&a[1]<<endl;
    //&a[0]=a(array name ) 
    // name of the array gives the address of the first element
    int n;
    float list[100] ,avg;
    avg=average(n,list);
    cout<<"avg "<<avg<<endl;
}

