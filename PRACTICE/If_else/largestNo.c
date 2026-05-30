// WAP to find the largest number between two numbers . //
#include<stdio.h>
int main(){
    int a,b;
    printf ("Enter the first number : ");
    scanf("%d",&a);
    printf ("Enter the second number : ");
    scanf("%d",&b);
    if(a==b){
      printf("a is equal to b");
    }
    else if (a>b){
        printf ("a is greatest");
            }
            else{
                printf("b is greatest"); 
            }
                return 0;
}