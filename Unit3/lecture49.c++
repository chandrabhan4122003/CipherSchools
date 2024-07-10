// recursion
//  Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve. Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
#include <iostream>
using namespace std;
int fib(int input)
{
   int final_answer;
   if (input == 0 || input == 1)
      return 1;
   final_answer = f(input - 1) + fib(input - 2);
   return final_answer;
}
int main()
{
   int input;
   cin >> input;
   cout << fib(input);
}