#include <iostream>
using namespace std;
class node
{
public:
   int data;
   node *next;
   node(int data_input)
   {
      this->data = data_input;
      this->next = NULL;
   }

} void printnode(node *&node)
{
   cout << "Value is " << node->data;
   cout << "address " << node->next;
}
int main()
{
   node *node1 = new node(3);
   node *node2 = new node(4);
   node *node3 = new node(5);

   // cout<<node1->data;
   printnode(node1);
   printnode(node2);
   printnode(node3);

   node1->next = node2;
   node2->next = node3;
}
