#include<stdio.h>

int main (){
    int n,m,j,i;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);
    printf ("Enter number of columns : ");
    scanf ("%d",&m);
    for (i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            printf ("* ");
         }
            printf ("\n"); 
         }
          return 0;
}