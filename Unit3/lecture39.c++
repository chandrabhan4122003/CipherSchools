// Bubble sort
//  In Bubble Sort algorithm,

// traverse from left and compare adjacent elements and the higher one is placed at right side.
// In this way, the largest element is moved to the rightmost end at first.
// This process is then continued to find the second largest and place it and so on until the data is sorted.

#include <iostream>
using namespace std;
int main()
{
   int i;
   int a[10];

   for (i = 0; i < 10; i++)
      cin >> a[i];
   int j;
   for (j = 0; j < 9; j++)
   {

      int temp;
      for (i = 0; i < 10 - j; i++)
      {
         if (a[i + 1] < a[i])
         {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
         }
      }
   }
   for (i = 0; i < 10; i++)
   {

      cout << a[i];
   }
}