#include<stdio.h>

int factorial(int x);

int main (){
    int x;
    printf ("Enter a number : ");
    scanf ("%d",&x);
    printf ("factorial = %d",factorial(x));
    return 0;
}

int factorial(int x){
    if (x==0)
    return 1;
    int a = factorial(x-1);
    int b = a*x;
    return b;
}