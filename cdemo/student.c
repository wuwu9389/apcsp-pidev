
#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[256];
  char lastname[256];
  int age;
  int studentid;
};




void printBookByPtr(struct Student* book)
{
  printf("Student -\n");
  printf("  Firstname:%s\n", book->firstname);
  printf("  Lastname:%s\n", book->lastname);
  printf("  Age:%d\n", book->age);
  printf("  id:%d\n", book->studentid);
}

int main()
{
	int age;
	int studentid;
	char firstname[256];
	char lastname[256];
	char input[256];
	struct Student book[256];
	printf("Enter first name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstname);
	printf("Enter last name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastname);
	printf("Enter age:\n");
	fgets(input, 4, stdin);
	sscanf(input, "%d", &age);
	printf("Enter student ID:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentid);
	
  struct Student student1;
  struct Student student2;

 
  strcpy(student1.firstname, firstname);
  strcpy(student1.lastname, lastname);
  student1.age = age;
  student1.studentid = studentid;

 
  printBookByPtr(&student1);
}
