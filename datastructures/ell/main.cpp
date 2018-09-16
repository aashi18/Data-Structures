#include"ell.cpp"
int main(){
   ell *list = new ell();
   list->appendNode(10);
   list->appendNode(20);
   list->appendNode(30);
   list->appendNode(40);
   list->appendNode(50);
   list->removeNodeAt(3);
   int index = list->findNode(20);
   cout << index << endl;
   list->deleteNode(20);
   list->insertNodeAt(1, 35);
   int data = list->peek(3);
   cout << data << endl;
   int size = list->getSize();
   cout << size << endl;
   delete list;
   return 0;
}
