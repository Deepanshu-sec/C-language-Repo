// WAP to function percentage of three subject. //
#include<stdio.h>

float marks(float science, float math, float pst){
    return (science + math + pst) / 300 * 100;
} 

int main (){
    float a, b, c;
  printf ("Enter science marks : ");
  scanf ("%f",&a);
  printf ("Enter math marks : ");
  scanf ("%f",&b);
  printf ("Enter pst marks : ");
  scanf ("%f",&c);
  printf ("Your percentage is = %f",marks(a,b,c));
    return 0;
}
