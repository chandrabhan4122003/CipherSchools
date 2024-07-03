#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<list>
using namespace std;
int main(){
    // stack<int>a;
    // a.push(5);
    // a.push(6);
    // a.push(8);
    
    // cout<<a.top()<<endl;
    // a.pop();
    // if(a.empty()==0){
    //     cout<<"the stack is empty"<<endl;
    // }
    // queue<int>a;
    // a.push(5);
    // a.push(6);
    // a.push(8);
    
    // cout<<a.front()<<endl;
    // a.pop();
    // cout<<a.back()<<endl;
    // if(a.empty()==0){
    //     cout<<"the queue is empty"<<endl;
    // }


    // map<string,int>hash;
    // hash["rohit"]=1;
    // hash["programming"]=2;
    // hash["reddy"]=3;
    // cout<<"the value of "<<hash[rohit]<<endl;
    // for(auto j=hash.begin();j!=hash.end();j++){
    //     cout<<"the key will be "<<j->first<<"the value in the key will be "<<j->second<<endl;
    // }

    list<int>a;
    a.push_back(4);
    a.push_front(2);
    a.push_front(3);
    a.push_back(9);

    a.pop_back();
    a.pop_front();

    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }




}