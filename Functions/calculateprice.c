#include<stdio.h>

int Calculatevalue(float value);

int main (){
 float value = 100.0 ;
 Calculatevalue(value);
 printf ("Value is = %f",value);
    return 0;
}

int Calculatevalue(float value) {
   value = value + (0.18*value);
   printf ("The price is = %f\n",value);
}