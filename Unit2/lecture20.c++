//address :- the position of the datatype in the memory where it is
//this we know by using (&) operator 
//the address always stores the first address 


#include<iostream>
using namespace std;
int main(){
        long long int a;
        int b;
        cout<<"the size of int b is"<<sizeof(b)<<endl;
        cout<<"the address of b is"<<&b<<endl; //hexa decimal representation
}