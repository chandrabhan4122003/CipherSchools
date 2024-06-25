//this Pointer 
//access specifier
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int attendence;
    float total_marks;
    void calculate_percentage(){
        cout<<total_marks<<"%";
    }
};

class Bank_Client{
        private:
        
        int credit_number;
        int cvv;
        int user_name;
        int password;
        public :
        string name;
        //we use public function to set private data 
        //private can be only access inside the function only
        //to access private of an object you definetly need a public element for accessing a private 
        void set_credit_number(int credit_number){
            //this function other than the parameters of the function ,we also passt the pointer of the object of this class,and the pointer is refered is 'this'
            this->credit_number=credit_number;
            cout<<"the address of the object calling this function is "<<this<<endl;
            // credit_number=number;
        }
        void get_creditcardnumber(){
            cout<<credit_number<<" ";
        }
        void set_allthestuffatonce(int credit_number,int name,int password ){
                this->credit_number=credit_number;
                this->name=name;
                this->password=password;
        }
        //every object when we define a function ,inherently passes the pointer of the object and the pointer is called "this pointer"



};
int main(){
    // Student a,b,c;

    //Student is the class and a,b,c are the objects
    // a.name="Chinku";
    // a.attendence=90;
    // a.total_marks=69;
    // a.calculate_percentage();

    Bank_Client a,b,c;
    a.name="chinku";
    a.set_credit_number(5668498889);
    cout<<"the address of this object is "<<&a<<endl;
    
    // a.get_creditcardnumber(); 
    // a.name="chinku";
    // a.password="123456";
    // a.cvv=888;
    // a.credit_number=32451789;

    // cout<<"the password of chinku"<<a.password;  //that we use access specifier (for which data is access to which )

    return 0;
}