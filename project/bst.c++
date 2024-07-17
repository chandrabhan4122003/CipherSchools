#include <iostream>
using namespace std;

struct Node
{
   int data;
   Node *left, *right;

   Node(int val)
   {
      data = val;
      left = right = NULL;
   }
};

Node *insertBST(Node *root, int val)
{
   if (root == NULL)
   {
      return new Node(val);
   }
   if (val < root->data)
   {
      root->left = insertBST(root->left, val);
   }
   else if (val > root->data)
   {
      root->right = insertBST(root->right, val);
   }
   return root;
}

Node *searchInBST(Node *root, int key)
{
   if (root == NULL || root->data == key)
   {
      return root;
   }
   if (root->data > key)
   {
      return searchInBST(root->left, key);
   }
   return searchInBST(root->right, key);
}

Node *inorderSucc(Node *root)
{
   Node *curr = root;
   while (curr && curr->left != NULL)
   {
      curr = curr->left;
   }
   return curr;
}

Node *deleteInBST(Node *root, int key)
{
   if (root == NULL)
      return root;

   if (key < root->data)
   {
      root->left = deleteInBST(root->left, key);
   }
   else if (key > root->data)
   {
      root->right = deleteInBST(root->right, key);
   }
   else
   {
      if (root->left == NULL)
      {
         Node *temp = root->right;
         delete root;
         return temp;
      }
      else if (root->right == NULL)
      {
         Node *temp = root->left;
         delete root;
         return temp;
      }

      Node *temp = inorderSucc(root->right);
      root->data = temp->data;
      root->right = deleteInBST(root->right, temp->data);
   }
   return root;
}

void inorder(Node *root)
{
   if (root == NULL)
      return;
   inorder(root->left);
   cout << root->data << " ";
   inorder(root->right);
}

void preorder(Node *root)
{
   if (root == NULL)
      return;
   cout << root->data << " ";
   preorder(root->left);
   preorder(root->right);
}

void postorder(Node *root)
{
   if (root == NULL)
      return;
   postorder(root->left);
   postorder(root->right);
   cout << root->data << " ";
}

Node *findMin(Node *root)
{
   if (root == NULL)
      return NULL;
   Node *curr = root;
   while (curr->left != NULL)
   {
      curr = curr->left;
   }
   return curr;
}

Node *findMax(Node *root)
{
   if (root == NULL)
      return NULL;
   Node *curr = root;
   while (curr->right != NULL)
   {
      curr = curr->right;
   }
   return curr;
}

int main()
{
   Node *root = NULL;
   root = insertBST(root, 5);
   insertBST(root, 1);
   insertBST(root, 3);
   insertBST(root, 4);
   insertBST(root, 2);
   insertBST(root, 7);

   cout << "Inorder Traversal: ";
   inorder(root);
   cout << endl;

   cout << "Preorder Traversal: ";
   preorder(root);
   cout << endl;

   cout << "Postorder Traversal: ";
   postorder(root);
   cout << endl;

   if (searchInBST(root, 5) == NULL)
   {
      cout << "Key does not exist" << endl;
   }
   else
   {
      cout << "Key exists" << endl;
   }

   Node *minNode = findMin(root);
   if (minNode != NULL)
   {
      cout << "Minimum value in BST: " << minNode->data << endl;
   }
   else
   {
      cout << "BST is empty" << endl;
   }

   Node *maxNode = findMax(root);
   if (maxNode != NULL)
   {
      cout << "Maximum value in BST: " << maxNode->data << endl;
   }
   else
   {
      cout << "BST is empty" << endl;
   }

   root = deleteInBST(root, 5);

   cout << "Inorder Traversal after deletion: ";
   inorder(root);
   cout << endl;

   cout << "Preorder Traversal after deletion: ";
   preorder(root);
   cout << endl;

   cout << "Postorder Traversal after deletion: ";
   postorder(root);
   cout << endl;

   return 0;
}
