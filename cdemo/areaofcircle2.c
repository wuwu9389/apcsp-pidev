
#include <stdio.h>
#include <math.h>
float areaOfCircle(float radius) 
{
  float area = (M_PI * radius * radius);
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("Range %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float lower, upper;
  printf("Set lower bound:\n");
  scanf("%f", &lower);
  printf("Set upper bound:\n");
  scanf("%f", &upper);
  for (float radius = lower; radius <= upper; radius++)
    {
	float result = areaOfCircle(radius);
	printf("Area at r = %f: %f\n", radius, result);
    }
}
