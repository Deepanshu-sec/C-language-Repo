// write a function to print n terms of the fibonacci sequence. //
#include<stdio.h>
 int fib(int n){
    if (n==0){
        return 0;
    } 
    if(n==1){
        return 1;
    }
    int a = fib(n-1);
    int b = fib(n-2);
    return a + b;
 }
int main (){
    int x;
   printf ("Enter a number : ");
   scanf ("%d",&x);
    printf ("fibonacci of %d is = %d",x,fib(x));
       return 0;
}