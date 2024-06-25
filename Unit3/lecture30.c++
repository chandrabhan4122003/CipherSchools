//CONSTRUCTORS and DECONSTRUCTORS
#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float img;
    public:
    void set_parameters(int real,int img){
        this->real=real;
        this->img=img;
    }
    void sqdistancefromOrigin(){
        float dist;
        dist=real*real+img*img;
        cout<<"the distance from origin is "<<dist<<endl;

    }
};

// i am a merchant and defining a class to store the amoung which the user gives to me and the number...
class New_account{
    public:
    int amount;
    int days;

//CONSTRUCTORS :-it constructs object automatically created no return type same name as class 
    //Default constructors
    New_account(){
        amount=0;
        days=0;
        cout<<"the constructors is called"<<endl;
        //no need to return anything 
    }
//parametrised constructor
New_account(int amount_initial,int days_initial){
    amount=amount_initial;
    days=days_initial;
    cout<<"the parameterised constructor is called"<<endl;
}
void print_account_details(){
    cout<<"the amount is "<<amount<<endl;
    cout<<"the days is "<<days<<endl;
}
//DECONSTRUCTORS 
~New_account(){
    cout<<"the deconstructors is called"<<endl;
}

    // void initial(){
    //     amount=0;
    //     days=0;
    // }
}
int main(){
    New_account a;
// a.initial();  // we have to every time for object creation instead of doing this we use constructor 
    Complex a,b;
    a.set_parameters(3,4);
    a.sqdistancefromOrigin();
    New_account p(200,5);
    p.print_account_details();

    
}