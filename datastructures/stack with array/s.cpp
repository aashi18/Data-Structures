#include "s.h"

s::s(int size)
{
   this->size = size;
   values = new int[size];
   top = -1;
}
s::~s()
{
   delete[] values;
}
bool s::isFull()
{
    if(top < size-1)
   {
      return false;
   }
   else
   {
      return true;
   }
}
bool s::isEmpty()
{
   if(top == -1)
   {
      return true;
   }
   else
   {
      return false;
   }
}
void s::push(int x)
{
   if(!isFull())
   {
      top++;
      values[top] = x;
   }
}
int s::pop()
{
     int retVal = 0;
     if(!isEmpty())
     {
     retVal = values[top];
     top--;
   }    
   return retVal;
}
