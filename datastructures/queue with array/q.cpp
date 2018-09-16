#include "q.h"

q::q(int size)
{
   this->size = size;
   values = new int[size];
   front = 0;
   back = 0;
}
q::~q()
{
   delete[] values;
}
bool q::isFull()
{
   if( (back+1) % size == front)
   {
      return true;
   }
   else
   {
      return false;
   }
}
bool q::isEmpty()
{
   if(back == front)
   {
      return true;
   }
   else
   {
      return false;
   }
}
void q::enq(int x)
{
   if(!isFull())
   {
      back = (back+1) % size;
      values[back] = x;
   }
}
int q::deq()
{
    
   if(!isEmpty())
   {
      front = (front+1) % size;
      return values[front];
    
   }
   return 0;
}
