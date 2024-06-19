#include<iostream>
using namespace std;
int main(){
    int password;
    do{
        cin>>password;

    }while(password<999999);
    // cout<<"enter the password"<<endl;
    // cin>>password;
    // while(password<999999){
    //     cout<<"the password does not meet the required condition,please enter the password again";
    //     cin>>password;

    // }
    // cout<<"the user has now entered a correct password"<<endl;
    

    //infinite loop
    int count=0;
    while(1){
        cout<<"hello world"<<endl;
        count++;
        if(count<100) break;
    }

    int i;
    for(i=0;i>=0;i++){
        cout<<i;
        if(i>100) break;
    }
}