#include<stdio.h>

int main (){
    int n,j,i,mid;
    printf ("Enter the odd number : ");
    scanf ("%d",&n);
         for (i=1; i<=n; i++) {
               for (j=1; j<=n; j++) {
         if ((i+j))
         printf ("* ");
         else printf ("  ");
            }
             printf ("\n");
             }
          return 0;
        }