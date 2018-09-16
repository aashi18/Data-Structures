
#include"ll.cpp"
class qll : public ll
{
   public:
      qll();
      virtual ~qll();
      void enqueue(int);
      int dequeue();
      bool isEmpty();
};
