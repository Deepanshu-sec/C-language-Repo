#include<stdio.h>
int main () {
    int i,j,n,q,k;
    printf ("Enter the number : ");
    scanf ("%d",&n);
    int nsp = n - 1;
    for (i=1; i<=n; i++) {
                for (q =1; q<=nsp; q++) {
            printf ("  ");
                  }   nsp--;
             for (j=1; j<=i; j++){
                printf ("%d ",j);
            } 
            int a = i - 1;
        for (k=1; k<=i-1; k++){
        printf ("%d ",a);   
        a--;     
        }
      printf ("\n");
    }
    return 0;
}