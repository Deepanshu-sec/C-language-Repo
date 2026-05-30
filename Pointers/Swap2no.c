#include<stdio.h>

int swap(int *x, int *y){
    int z = *x;
  *x = *y;
  *y = z;
  }

  int main(){
   int a = 10, b = 5;
   swap(&a,&b);
  printf ("a = %d & b = %d\n",a,b);
    return 0;
}