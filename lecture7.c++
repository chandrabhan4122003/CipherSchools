#include<iostream>
using namespace std;
int main(){
    int x; //variable name x of type int --> it can store a single integer which means x can store either 1or 2 ar any single element
    //arrays can be used to store multiple values in a single variable name;
    int a[5];// this means it is an array of name a which can store multiple integers
    //elements starting from 0to 5
    //the first element will have an index o-->a[0];
    //the second element will have an index --> a[1];

    int a,b,c,d,e;
    cout<<"give 5 integer as input"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"the integer in reverse order are: "<<e<<d<<c<<b<<a;
    return 0;
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=i;
    }

}