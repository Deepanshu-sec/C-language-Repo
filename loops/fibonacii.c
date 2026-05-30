#include<stdio.h>
int main() {
    int n,a=1,b=1,fi=1; 
    printf ("Enter a number : ");
    scanf ("%d",&n);
    for (int i=1;i<=n-2;i++) {
      fi = a + b;
        a=b;
        b=fi; 
        // h = h + i;
        printf ("The %dth fibonacci number is = %d\n",i,fi); }
    return 0;
}