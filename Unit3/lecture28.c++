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
        void set_credit_number(int number){
            credit_number=number;
        }
        void get_creditcardnumber(){
            cout<<credit_number<<" ";
        }



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
    a.get_creditcardnumber(); 
    // a.name="chinku";
    // a.password="123456";
    // a.cvv=888;
    // a.credit_number=32451789;

    // cout<<"the password of chinku"<<a.password;  //that we use access specifier (for which data is access to which )

    return 0;
}