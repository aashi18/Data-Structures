#include <iostream>
#include"qll.cpp"
using namespace std;
int main(){
   int i;
   qll *queue = new Queue(8);
   queue->enqueue(10);
   queue->enqueue(20);
   queue->enqueue(30);
   for(i=0; i<2; i++)
   {
      cout << queue->dequeue() << endl;
   }
}
