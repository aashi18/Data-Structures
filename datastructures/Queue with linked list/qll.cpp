#include "qll.h"
qll::qll()
{
}
qll::~qll()
{
}
void qll::enqueue(int x)
{
   ll::appendNode(x);
}
int qll::dequeue()
{
   if(isEmpty())
   {
      return -1;
   }
   int retVal = front->data;
   NODE* temp = front;
   if(front->next == NULL)
   {
      back = NULL;
      front = NULL;
   }
   else
   {
      front = front->next;
      front->previous = NULL;
   }
   delete temp;
   return retVal;
}
bool qll::isEmpty()
{
   if(front == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}
