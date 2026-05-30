// write a function to convert celsius to fahrenheit . //
#include <stdio.h>

float fahrenheit(float n)
{
  return (n * 9 / 5) + 32;
}
int main()
{
  float c;
  printf("Enter celsius value : ");
  scanf("%f", &c);
  printf("Fahrenhiet value = %f", fahrenheit(c));
  return 0;
}