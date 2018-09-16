#include"sll.cpp"
#include <iostream>
using namespace std;
int main(){
   sll *stack = new sll();
   stack->push(10);
   stack->push(20);
   stack->push(30);
   stack->displayNodes();
   delete stack;
   return 0;
}
