#include<stdio.h>
int main () {
    int n,sum=0,ld;
    printf ("Enter a number : ");
    scanf ("%d",&n);
while (n>0) {
ld = n%10;  
n=n/10; 
if (ld%2==0) {
   sum = sum + ld; 
 } 
}
printf ("Even no. sum is %d",sum);
    return 0;
    }