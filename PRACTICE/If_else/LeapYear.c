// WAP to check a year is leap or not . //
#include<stdio.h>
int main (){
 int n;
 printf ("Enter a year : ");
 scanf("%d",&n);
 if ((n%4==0 && n%100!=0 )|| n%400==0 ){
    printf ("Year is a leap year");
 } 
 else {
    printf("Not a leap year");
 }
    return 0;
}