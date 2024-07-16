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
void printlinkedlist(node *&head)
{
   if (head == NULL)
   {
      cout << "empty";
      return;
   }
   node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}
void InsertAtStart(node *&head, int data)
{
   node *temp = new node(data);
   if (head == NULL)
   {
      head = NULL;
      retun;
   }
   temp->next = head;
   head = temp;
}
void InsertAtEnd(node *&head, int data)
{
   node *temp = new node(data);
   if (head == NULL)
   {
      head = NULL;
      retun;
   }
   node *end = head;

   while (end->next != NULL)
   {
      end = end->next;
   }
   end->next = temp;
}
int main()
{
   node *head;
   InsertAtStart(head, 5);
   InsertAtStart(head, 4);
   InsertAtStart(head, 4);
   InsertAtEnd(head, 6);
   InsertAtEnd(head, 8);
   printlinkedlist(head);

   // printlinkedlist(head);
   // node *node1 = new node(3);
   // node *head = node1;
   // node *node2 = new node(4);
   // node *node3 = new node(5);

   // // cout<<node1->data;
   // printnode(node1);
   // printnode(node2);
   // printnode(node3);

   // node1->next = node2;
   // node2->next = node3;

   // node *head = node1;
   printlinkedlist(head);
}
