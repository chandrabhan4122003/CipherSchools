// CLASS and OBJECTS
#include <iostream>
using namespace std;
class student
{ // versatile datatype which can store multiple data types
public:
   string name;
   int mids;
   float ends;
   bool pre_abs;
   void calculate_marks()
   {
      float total_marks;
      total_marks = mids * 0.5 + ends * 0.75;
      cout << "the marks of the student" << total_marks;
   }

private:
   void calculate_fail_probability()
   {
      if (ends < 0)
         cout << "teh dlksj lkdjd";
   }
};
class vehicle
{
public:
   string car_name;
   string tyre_type;
   int number_of_tyres;
   int Number_of_seats;

} int main()
{

   // these were class comes when you have lots of data to store that have same properties
   //  string name;
   //  int mid;
   //  float ends;
   //  bool pre_abs;

   // it is template :class
   // (User defined datatype)
   student a; // a,b,c are objects of the particular class
   // vehicle c, d, e;
   a.name = "rohit";
   a.mids = 50;
   a.ends = 99.5;
   a.pre_abs = 1;
   a.calculate_marks();
   vehicle b;
   b.car_name = "verma";
   b.number_of_tyres = 4;
   b.Number_of_seats =
}
