#include <iostream>
using namespace std;
struct StudentRecord
{
   int studentNumber;
   char grade;
} ;
int main()
{
  StudentRecord myStudent;
  myStudent.studentNumber = 10;
  myStudent.grade = 'A';
  cout << "grades: " << myStudent.studentNumber << " "<<      myStudent.grade << endl;
  return 0;
}


