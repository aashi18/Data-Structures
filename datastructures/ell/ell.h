#include<iostream>
using namespace std;


typedef struct Node{
   Node(int data)
   {
      this->data = data;
      previous = NULL;
      next = NULL;
   }
   int data;
   struct Node* previous;
   struct Node* next;
} NODE;
class ell
{
   protected:
      NODE* front;
      NODE* back;
      int size;
      void removeNode(NODE* node);
   public:
      ell();
      virtual ~ell();
      void appendNode(int);
      void displayNodes();
      void displayNodesReverse();
      void destroyList();
      void removeNodeAt(int);
      int findNode(int);
      void deleteNode(int);
      void insertNodeAt(int,int);
      int peek(int);
      int getSize();
};
