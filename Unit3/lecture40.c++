// Insertion sort
//  Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
#include <iostream>
using namespace std;
int main()
{
   cout << "Input an array of elements" << endl;
   int i;
   int arr[6];
   for (i = 0; i < 6; i++)
      cin >> arr[i];

   int key, j;
   for (i = 1; i < 6; i++)
   {
      key = arr[i];
      j = i - 1;

      // Move elements of arr[0..i-1],
      // that are greater than key,
      // to one position ahead of their
      // current position
      while (j >= 0 && arr[j] > key)
      {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = key;
   }
   for (int i = 0; i < 6; i++)
   {
      cout << arr[i] << " ";
   }
}