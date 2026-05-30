// WAP to check a number is prime or not by while loop. //
#include<stdio.h>
int main(){
    int i=2, flag = 0, n;
    printf ("Enter a number : ");
    scanf ("%d ",&n);
    while (i<=n-1){
        if(n%i==0){
            flag = 1;
        }
        i++;
    }
    if (n==1) printf ("neither prime nor composite ");
    else if (flag==0) printf ("Prime number");
    else {
        printf ("Not a prime number ");
    }
    return 0;
}