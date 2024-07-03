//STANDARD TEMPLATE LIBRARY 
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> a;
    cout<<"the size of the vector is "<<a.size();
    int i;
    for(i=0;i<5;i++){
        a.push_back(i+1);
    }
    a.pop_back();
    cout<<a.size();
    cout<<"the size of the vector is "<<a.size();
    for(auto j=a.begin();j<a.end();j++){
        cout<<*j;
    }
    cout<<a.capacity();
}
