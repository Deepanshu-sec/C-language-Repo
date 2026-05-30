// WAP to check the number is prime or not. //
#include<stdio.h>
int main(){
    int n,prm=0;
    printf("Enter a number : ");
    scanf ("%d ",&n);
    for (int i=2; i<=n/2; i++){
        if (n%i==0){
            prm = 1;
        }
        if(n%i!=0){
            prm = 0;
        }
    }
    if (prm==1){
        printf("Not a prime number :");
    }
    else {
        printf ("A prime number : ");
    }
    return 0;
    }