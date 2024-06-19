#include<iostream>
using namespace std;
void PrintHi()
{
    cout<<"hi"<<endl;
    return;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    PrintHi();
    int a,b;
    a=4;
    b=7;
    cout<<"the sum of two no is"<<sum(a,b);
    return;

}