#include<iostream>
using namespace std;
void printstuff(){
    cout<<"writting my first function";
}
int add(int x,int y){
    return x+y;
}
int main(){
    printstuff();
    int a,b;
    cin>>a>>b;
    int sum=add(a,b);
    cout<<"addition of a and b"<<sum<<endl;
}