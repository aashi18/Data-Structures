#include"sll.h"
sll::sll()
{
}
sll::~sll()
{
}
void sll::push(int x)
{
   appendNode(x);
}
int sll::pop()
{
   if(isEmpty())
   {
      return -1;
   }
   int retVal = back->data;
   NODE* temp = back;
   if(back->previous == NULL)
   { 
     back = NULL;
     front = NULL;
   }
   else
   {
      back = back->previous;
     back->next = NULL;
   }
   delete temp;
   return retVal;
}
bool sll::isEmpty()
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

