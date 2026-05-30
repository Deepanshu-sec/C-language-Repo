#include<stdio.h>

int main (){
    int n,j,i;
    printf ("Enter side of square : ");
    scanf ("%d",&n);
      for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            printf ("* ");
         }
            printf ("\n"); 
         }
          return 0;
}