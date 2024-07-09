// code for selection sort
#include <iostream>
using namespace std;
int main()
{
   int a[10];
   int i;
   for (i = 0; i < 10; i++)
      cin >> a[i];

   // start of selection sort
   int least_index;
   int j;

   // for first iteration
   // least_index=0;
   // for(j=0;j<10;j++){
   //    if(a[j]<a[least_index]) least_index=j; //if we find an index in j=(0,9) at which a[j ] is less than than least index value then we change the least_index
   // }
   // int temp;
   // temp=a[0];
   // a[0]=a[least_index];
   // a[least_index]=temp;

   // for each element
   for (int i = 0; i < 9; i++)
   {
      least_index = i;
      for (j = i + 1; j < 10; j++)
      {
         if (a[j] < a[least_index])
            least_index = j;
      }
      if (least_index != i)
         swap(a[least_index], a[i]);
   }
   for (int k = 0; k < 10; k++)
   {
      cout << a[k] << " ";
   }
}