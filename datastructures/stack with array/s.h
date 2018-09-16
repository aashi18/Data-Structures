#define DEFAULT_SIZE 10
class s 
{
  
     
  public:
     int size;
     int top;
     int* values;
     s(int size = DEFAULT_SIZE);
     virtual ~s();
     bool isFull();
     bool isEmpty();
     void push(int);
     int pop();
};
