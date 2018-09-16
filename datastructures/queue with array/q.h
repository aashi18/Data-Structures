#define DEFAULT_SIZE 8
class q{
   
      
   public:
      int size;
      int front;
      int back;
      int* values;
      q(int size = DEFAULT_SIZE);
      virtual ~q();
      bool isFull();
      bool isEmpty();
      void enq(int);
      int deq();
};
