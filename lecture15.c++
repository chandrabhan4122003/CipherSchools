#include<iostream>
using namespace std;
int compare(int x,int y){
    if(x>y){
        return x;

    }
    else{
        return y;
    }
}
int guess(int a){
    if(a==5){
        return 1;
    }
    // else{
    //     return 0;
    // } or 
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    int max=compare(a,b);
    cout<<"max of a and b"<<max;
    int res=guess(a);
    if(res==1){
        cout<<"guessed right"<<endl;
    }
    else{
        cout<<"not right"<<endl;
    }
}