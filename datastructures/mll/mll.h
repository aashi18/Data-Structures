#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Node
{
   int id;
   int fn;
   int ln;
   int age;
   int phone;
   struct Node* next;
} node;
class mll  
{
   protected:
      node* front;
      node* back;
     
   public:
      mll();
      virtual ~mll();
      void appendNode(int);
      void destroyList();
      int getrandomid(int);
      int getrandomfn();
      int getrandomln();
      int getrandomage(int);
      int getrandomphone();
      void search();
      void display(node*);
      void displayNodes();
       
};

