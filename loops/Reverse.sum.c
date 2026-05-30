#include<stdio.h>
int main (){
    int n,ld,temp,rev=0,sum;
    printf ("Enter a number : ");
    scanf ("%d",&n);
    temp = n;
    while (n>0) {
        ld = n%10;
        rev = rev*10 + ld;
        n = n/10;
        }
        printf ("The reverse is = %d\n",rev);
        sum = temp + rev;
        printf ("The sum of both steps is = %d",sum);
    return 0;
}