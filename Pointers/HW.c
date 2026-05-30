#include<stdio.h>

float square (float n){
      printf ("Square is = %f\n",n*n); 
}
float _square(float *n){
 *n = (*n) * (*n);
    printf ("square is = %f\n",*n);
}


int main (){
    float number = 4;
    square(number);   
    printf ("Numbert is = %f\n",number);
    _square(&number);
    printf ("Number = %f",number);
    return 0;
}