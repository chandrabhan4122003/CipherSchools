// Queue(FIFO)
// first in first out
#include <iostream>
using namespace std;
class Queue
{
public:
   int max_capacity;
   int queue[1000];
   int front;
   int rear;
   int capacity;

   Queue()
   {
      this->front = 0;
      this->rear = -1;
      this->max_capacity = 1000;
      this->capacity = 0;
   }
   void enqueue(int data)
   {
      if (capacity == 1000)
      {
         cout << "Maximum capacity has been reached";
         return;
      }
      rear = (rear + 1) % capacity;
      queue[rear] = data;
      capacity++;
   }
   void dequeue()
   {
      if (capacity == 0)
      {
         cout << "empty";
         return;
      }
      cout << "the element to be dqu is " << queue[front];
      front++;
      capacity--;
   }
   void peekqueue()
   {
      cout << "the front element is " << queue[front] << endl;
   }
   void sizeofqueue()
   {
      cout << "the sixze is " << capacity << endl;
   }
} int main()
{
   Queue q;
   q.enqueue(15);
   q.enqueue(1);
   q.enqueue(10);
   q.enqueue(1);
   q.dequeue();
   q.peekqueue();
   q.sizeofqueue();
}
