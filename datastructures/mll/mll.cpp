#include "mll.h"
#include<time.h>

mll::mll()
{
   front = NULL;
   back = NULL;
   srand(clock());
}
mll::~mll()
{
   destroyList();
}
void mll::appendNode(int i)
{
   node *n=new node();
    
   n->id=getrandomid(i);
   n->fn=getrandomfn();
   n->ln=getrandomln();
   n->age=getrandomage(i);
   n->phone=getrandomphone();
  
   
   if(back == NULL)
   {
      back = n;
      front = n;
   }
   else
   {
      back->next = n;
      back = n;
   }
}
int mll::getrandomid(int i)
{
    return i;
   
    
    
}
int mll::getrandomfn()
{
    

  
    return rand();
}
int mll::getrandomln()
{
      
 
    return rand();
}
int mll::getrandomage(int i)
{
       

   
    return (i+rand())%100;
}
int mll::getrandomphone()
{
   
 
   
    return rand();
}
void mll::search()
{
    int count=0;
    node *temp;
    temp = front;
while(temp->next!=NULL)
{
    if(temp->age >= 25)
    {
        count++;
        display(temp);

    }
temp=temp->next;
}
cout << count << endl;
}
void mll::display(node *temp)
{
    cout << "Age : " << temp->age<<endl;
    cout << "ID : " << temp->id<<endl;
}
void mll::destroyList()
{
   node* temp = front;
   while(temp != NULL)
   {
      node* temp2 = temp;
      temp = temp->next;
      delete temp2;
   }
   back = NULL;
   front = NULL;
}
void mll::displayNodes()
{
   cout << "Nodes:" << endl;
   node* temp = front;
   while(temp != NULL)
   {
      cout << " " << temp->id << endl;
      cout << " " << temp->fn << endl;
      cout << " " << temp->ln << endl;
      cout << " " << temp->age << endl;
      cout << " " << temp->phone << endl;
      temp = temp->next;
   }
}
