
//Object oriented programming pt1
// Encapsulation is defined as binding together the data and the functions that manipulate them.



#include<iostream>

using namespace std;
// class Student
// {
//     private:
//     int marks;
//     int attendence;
//     string name;

//     public:
//     void displayMarks(){
//         cout<<marks;
//     }
// };


//  this is why use inheritance 

// class Bus{
//     private:
//     int number_typers;
//     string name;
//     int capacity;
//     int mileage;
//     public :
//     void calculatemileage(){
//         cout<<"the mileage us "<<mileage;
//     }
//     void printnameofschool(){
//         cout<<"the name of the school is "<<name;
//     }
// };
// class Car{
//     private:
//     int number_typers;
//     string name;
//     int capacity;
//     int mileage;
    
//     int number_airbags;
//     int ac_consumption;
//     public:
//     void calculatemileage(){
//         cout<<"the mileage is "<<mileage;
//     }
//     void printnameofschool(){
//         cout<<"the name of the school is "<<name;
//     }
// };

// INHERITANCE 
class Vehicle{  // the base class 
    // private:
    public:
    int number_typers;
    string name;
    int capacity;
    int mileage;
    public:
    void calulatemileage(){
        cout<<"the mileage is "<<mileage;
    }
};
class SchoolBus : public Vehicle{
    string school_name;
    int number_holidays;
    public :
    void printnameofschool(){
        cout<<"the name of the school is "<<school_name;
    }
}
class Car:public Vehicle{
    private :
    int number_airbags;
    int ac_consumption;
    public:
    void calculatemileage(){
        cout<<"the mileage is "<<mileage;
    }
};
int main(){
    Car a;
    a.calculatemileage();
}