// WAP to sum of digits of a numbers . //
#include<stdio.h>
int main(){
    int i,num,sum = 0;
    printf("Enter a number : ");
    scanf ("%d",&num);
    while (num>0){
        sum = sum + num%10;
        num = num / 10;
    }
    printf("%d ",sum);
    return 0;
}