// WAP to sum of all numbers from 1 to 10. //
#include<stdio.h>
int main (){
    int i=1,sum = 0;
    while(i<=10) {
        sum = sum + i;
         i++;
    }
         printf("%d ",sum);
          return 0;
}