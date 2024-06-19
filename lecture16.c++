#include<iostream>
using namespace std;
//function prototype 
// A function prototype refers to a declaration of the function that informs the program regarding the type of value returned. 
void sum(int a,int b); 
int main(){
    int x,y;
    cin>>x>>y;
    sum(x,y);
}
void sum(int a,int b){
    cout<<"the sum of two numbers is"<<a+b;
}