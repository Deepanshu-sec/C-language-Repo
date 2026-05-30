// Use library function to calculate the square of a no. given by user . // 

#include<stdio.h>
#include<math.h>
int main (){
 float n,m;
    printf ("Enter first number : ");
    scanf ("%f",&n);
    printf ("Enter second number : ");
    scanf ("%f",&m);

   printf ("%f ki power %f is = %f",n,m,pow(n,m));
    return 0;
}