#include<stdio.h>

int printTable(int n);

int main (){
    int n;
    printf ("Enter a number : ");
    scanf ("%d",&n);
     printTable(n) ;
    return 0;
}

int printTable(int x){
   for (int i=1;i<=10;i++) {
    printf ("%d ",i*x);
   }
} 