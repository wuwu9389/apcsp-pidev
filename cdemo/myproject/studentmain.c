#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
  char input[256];
  struct Student students[256];
  char ans;
  int act = 0;
  int count = 0;

  while (act = 0)
  {
    printf("Do you want to enter a student(Y/N)?\n");
    fgets(input, 256,stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "y") == 0)
      {
	act = 0;
	char firstName[256];
	char lastName[256];
	int age;
	int studentID;
	printf("Enter first name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstName);
	printf("Enter last name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastName);
	printf("Enter age:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", age);
	printf("Enter student ID\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", studentID);
	strcpy(students[count].firstName, firstName);
	strcpy(students[count].lastName, lastName);
	students[count].age = age;
	students[count].studentID = studentID;
	count++;
    }
  else
    {
	act = 1;
	int view;
	printf("Which student to view(number)?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", view);
	printStudent(&students[view]);
    }
  }
}
