#include<stdio.h>
int alphabets(int *x);
int main(){
    int ch;
     alphabets(&ch);
         return 0;
}
int alphabets(int *x){
  for (int i = 65;i<=90;i++){
    printf (" %c ",i);
  } 
}

