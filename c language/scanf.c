#include<stdio.h>
int main() {
    float principal,rate,time,simpleinterest;
    printf("Enter your principal :");
    scanf("%f",&principal);
    printf("Enter your rate :");
    scanf("%f",&rate);
    printf("Enter your time :");
    scanf("%f",&time);
    simpleinterest = (principal*rate*time)/100;
    printf(" your principal interest is : %f", simpleinterest);
    return 0;
    }