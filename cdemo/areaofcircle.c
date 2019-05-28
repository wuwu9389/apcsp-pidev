#include <stdio.h>

float areaofcircle(float r){
float answer = ((r * r) * 3.14);
return answer;

}

int main(){
float num;
num = calculateArea(2.5);
printf("The area of the circle is %f\n", num);
}
