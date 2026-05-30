#include<stdio.h>

int sum(int n);
 
int main (){
    int x;
   printf ("Enter a number : ");
   scanf ("%d",&x);
   printf ("sum = %d ",sum(x));
    return 0;
}

int sum (int n){
    if(n==1)
    return 1;
    int a = sum(n-1);
    int b = a + n;
    return b;
}