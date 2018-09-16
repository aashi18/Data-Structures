#include <iostream>
using namespace std;

int main()
{
char bobGrade = 'A';
char maryGrade = 'B';
char amberGrade = 'A';
char *ptGradeBook[3];
char **ptPTStudents[3];
char recordedGrade[3];
ptGradeBook [0] = &bobGrade;
ptGradeBook [1] = &maryGrade;
ptGradeBook [2] = &amberGrade;
for (int i = 0; i < 3; i++)
   recordedGrade[i] = *ptGradeBook[i];

ptPTStudents[0] = &ptGradeBook[0];
cout << *ptGradeBook[0] << endl;
cout << **ptPTStudents[0] << endl;
  return 0;
}


