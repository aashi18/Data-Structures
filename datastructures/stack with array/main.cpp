#include<iostream>
#include"s.cpp"
using namespace std;
int main() {
   s a;
   a.push(10);
   a.push(20);
   a.push(30);
   for(int i=0; i<3; i++)
   {
      cout << a.pop() << endl;
   }
return 0;
}
