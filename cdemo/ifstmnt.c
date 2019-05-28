#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a != 0)
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }    
  if (a > 0)
  {
    printf("a is greater than 0\n");
  }
  else
  {
    printf("a is less than 0\n");
  }
  if (a >= 0)
  {
    printf("a is greater than or equal to 0\n");
  }
  else
  {
    printf("a is less than 0\n");
  }
  if (a == 0 && b == 0)
  {
    printf("a and b are 0\n");
  }
  else
  {
    printf("a and b are not 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a or b is 0\n");
  }
  else
  {
    printf("a and b are not 0\n");
  }
  if (!(a == 0))
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
}
