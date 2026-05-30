#include<stdio.h>

float square (float n){
      printf ("Square is = %f\n",n*n);
}

int main (){
    float number = 4;
    square(number);
    printf ("Numbert is = %f",number);
    return 0;
}