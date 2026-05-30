#include<stdio.h>
int main(){
    int principal,rate,time,simpleinterest;
    printf ("Enter the principal : ");
    scanf ("%d", &principal);
    printf ("Enter the rate : ");
    scanf ("%d",&rate);
    printf ("Enter the time : ");
    scanf ("%d",&time);
    simpleinterest = (principal*rate*time)/100;
    printf ("The simple interest is = %d",simpleinterest);
    return 0;
}