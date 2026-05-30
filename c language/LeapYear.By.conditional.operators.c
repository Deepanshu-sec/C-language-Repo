#include<stdio.h>
int main () {
  int year;
  printf ("Enter a year : ");
  scanf ("%d",&year);
  if (year%4==0) printf ("A leap year :\n");
  else if (year%400==0) printf ("A leap year :\n");
  else if (year%100==0) printf ("Not a leap year :\n");
  else printf ("Not a leap year :");
  return 0;

}