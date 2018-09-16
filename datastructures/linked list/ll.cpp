#include "ll.h"

ll::ll()
{
   front = NULL;
   back = NULL;
}
ll::~ll()
{
   destroyList();
}
void ll::appendNode(int data)
{
   NODE *n = new NODE(data);
   if(back == NULL)
   {
      back = n;
      front = n;
   }
   else
   {
      back->next = n;
      n->previous = back;
      back = n;
   }
}
void ll::displayNodes()
{
   cout << "Nodes:" << endl;
   NODE* temp = front;
   while(temp != NULL)
   {
      cout << " " << temp->data << endl;
      temp = temp->next;
   }
}
void ll::displayNodesReverse()
{
   cout << "Nodes in reverse order:" << endl;
   NODE* temp = back;
   while(temp != NULL)
   {
      cout << " " <<  temp->data << endl;
      temp = temp->previous;
   }
}
void ll::destroyList()
{
   NODE* temp = back;
   while(temp != NULL)
   {
      NODE* temp2 = temp;
      temp = temp->previous;
      delete temp2;
   }
   back = NULL;
   front = NULL;
}

