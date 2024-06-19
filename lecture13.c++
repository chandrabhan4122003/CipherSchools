#include<iostream>
using namespace std;
void compare(int x,int y){
    if(x>y){
        cout<<x;
    }
    else{
        cout<<y;
    }
}
int main(){
    int a=11;
    int b=12;
    compare(a,b);
}