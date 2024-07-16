// Queue(FIFO)
// first in first out
#include <iostream>
using namespace std;
class Queue
{
public:
   int capacity;
   int queue[1000];
   int front;
   int rear;
   Queue()
   {
      this->front = 0;
      this->rear = -1;
      this->capacity = 1000;
   }
}
