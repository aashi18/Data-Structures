#include <iostream>
#include"ll.cpp"
using namespace std;
int main(){
   ll * list = new ll();
   list->appendNode(10);
   list->appendNode(20);
   list->appendNode(30);
   list->displayNodes();
   list->displayNodesReverse();
   delete list;
   return 0;
}
