#include<iostream>
using namespace std;
int main(){
    // int i=3;
    // while(i<100){
       
    //     cout<<i<<endl;
    //     i++;
    // }
    int i;
    int input;
    i=100;
    for(i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"correct you have guessed right"<<endl;
            break;
        }
    }
}