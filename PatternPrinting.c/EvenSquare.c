#include<stdio.h>
int main () {
    int i,j,n;
    printf ("Enter The side of square : ");
    scanf ("%d",&n);
    for (i=1; i<=n; i++) {
         int a = 2;
        for (j=1; j<=n; j++) {
        printf ("%d ",a); 
     a = a + 2;  }
         printf ("\n");
    } 
    return 0;
}