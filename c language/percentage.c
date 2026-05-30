#include<stdio.h>
#include<conio.h>
int main(){
  float a,b,c,d,g,percentage;
  printf ("Enter english marks");
    scanf ("%f",&a);
    printf ("Enter pst marks");
    scanf ("%f",&b);
    printf ("Enter math marks");
    scanf ("%f",&c);
    printf ("Enter geography marks");
    scanf ("%f",&d);
    printf ("Enter evs marks");
    scanf ("%f",&g);
       percentage =  (a+b+c+d+g)/5;
       printf ("your percentage is : %f", percentage);

    getch ();

}