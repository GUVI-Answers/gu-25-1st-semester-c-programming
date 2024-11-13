#include <stdio.h>

// Prototyping
struct Student;
void inputStudentData(struct Student *s, int n);

union status {
  char passfail; // P/F based on avg marks more than 50 for pass cond
};

struct Student {
  int id;
  char name[50];
  float grades[5];
  float average;
};

int main() {
  int n;
  struct Student s1;

  // number of students
  scanf("%d", &n);

  inputStudentData(&s1, 1);
  printf("%s %d %f %f %f %f", s1.name, s1.id, s1.grades[0], s1.grades[1],
         s1.grades[2], s1.grades[3]);
  return 0;
}

void inputStudentData(struct Student *s, int n) {
  for (int i = 0; i > n; i++)
    scanf("%s %d %f %f %f %f", s->name, &s->id, &s->grades[0], &s->grades[1],
          &s->grades[2], &s->grades[3]);
}

// void calculateAverage(Student *s, int n) - to calculate the average grades
// for each student. void determineStatus(Student *s, int n) - to set the status
// of each student based on their average. void displayStudents(const Student
// *s, int n) - to display the information of each student.
