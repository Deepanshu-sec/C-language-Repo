#include<stdio.h>
int main (){
    int i,n,sum = 0;
    printf ("Enter a number : ");
    scanf ("%d",&n);
         if (i%2!=0)        //by for loop method in copy.     
       { sum = -n/2; }      // series = 1-2+3-4+5-6+7......
        else  {                                  
     sum = -n/2 + n ; }
        printf ("The sum of series = %d",sum);
    return 0;
    }