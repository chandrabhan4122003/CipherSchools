#include<iostream>
#include<string>
using namespace std;
int main(){
    // string name;
    // cin>>name;
    // int i;
    // for(i=0;i<4;i++){
    //     cout<<name[i]<<endl;
    // }
    //a string is a cahracter array with a null character at the end '\n'

    // string a;
    // string b;
    // cin>>a>>b;
    // cout<<a<<" "<<b<<endl;
    // string c;
    // c=a+b;  // concentation
    // cout<<"the combined word is "<<c<<endl;
    // cout<<"the lenght is "<<c.length()<<endl;

    string a;
    cin>>a;
    cout<<"the full name is "<<a<<endl; // when encountered space it terminates bcoz of this 
    //use getline
    string b;
    getline(cin,b);
    cout<<"the full name is "<<b<<endl;




}