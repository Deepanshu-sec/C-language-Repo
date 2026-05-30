#include<stdio.h>
int main () {
    int i,j,n,nsp,nst;
    printf ("Enter the number : ");
    scanf ("%d",&n);
    nst = 1;
    nsp = n - 1;
    for (i=1;i<=2*n-1;i++) {
        for (j=1;j<=nsp;j++){
            printf ("  ");
        } 
        for (j=1;j<=nst;j++) {
            printf ("* ");
        } 
        if (i<n) {
            nsp--;
            nst += 2;
        } 
        else {
            nsp++;
            nst -= 2;
        }
             printf ("\n"); }
  return 0;
}