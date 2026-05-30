#include<stdio.h>
int main () {
    int i,n,sum=0;
    printf ("Enter a number : ");
    scanf ("%d",&n);             // agar for loop wale brakets lga diye(print se pehle tak) to 1 3 6 10 15....aise
                                 // gape me print ho jayenge 
    for (i=1; i<=n; i++) 
        sum = sum + i;
        printf ("%d ",sum); 
        return 0;
}