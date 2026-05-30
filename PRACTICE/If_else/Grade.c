// WAP to print students grade in exam. //
#include<stdio.h>
int main (){
 int marks;
 printf ("Enter the marks : ");
 scanf("%d",&marks);
 if (marks>=90)
    printf("A grade ");
 else if(marks>=75) printf("B grade ");
 else if (marks>=60) printf ("C grade ");
 else if (marks>=33) printf ("D grade ");
 else {
    printf ("FAIL ");
 }
    return 0;
}