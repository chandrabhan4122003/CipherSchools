//returning multiple values from a function
#include<iostream>
using namespace std;
void minandmax(int *a,int *min,int * max){
    //whatever we change to *min,*max inside the function will get afffected even outside the function
    int small=1000000,int large=-999999;
    for(int i=0;i<5;i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
        

    }
    *min=small;
    *max=large;
}
int main(){
    int a[5];
    int min,max;
    int i;
    for(i=0;i<5;i++){
        a[i]=i;
    }
    minandmax(a,&min,&max);
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
}