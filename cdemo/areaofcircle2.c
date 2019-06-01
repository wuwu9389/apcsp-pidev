
#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius) 
{
  float area = (M_PI * radius * radius);
  return area;
}

int main(int argc, char* argv[])
{
 if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two floats\n", argv[0]);
    return 1;
  }
  
  float lower;
  int found = sscanf(argv[1], "%f", &lower);
  if (found != 1)
    {
	printf("First arg is not a decimal, enter two floats\n");
	return 1;
    }

  float upper;
  found = sscanf(argv[2], "%f", &upper);
  if (found != 1)
    {
	printf("Second arg is not a decimal, enter two floats\n");
	return 1;
    }
  for (float radius = lower; radius <= upper; radius++)
    {
	float result = areaOfCircle(radius);
	printf("Area at r = %f: %f\n", radius, result);
    }
}
