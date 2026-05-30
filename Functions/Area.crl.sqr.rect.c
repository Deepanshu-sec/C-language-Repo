#include<stdio.h>

float circleArea(float r);
float squareArea(float side);
float rectangleArea(float l,float b);

int main (){
 float l,b,r,side;
 printf ("Enter the length & brigth of rectangle : ");
 scanf ("%f %f",&l,&b);
 printf ("The area of rectangle is = %f\n",rectangleArea(l,b));

 printf ("Enter the radius of circle : ");
 scanf ("%f",&r);
 printf ("The area of circle is = %f\n",circleArea(r));

printf ("Enter the side of square : ");
scanf ("%f",&side);
printf ("The area of square is = %f\n",squareArea(side));
    return 0;
}

float circleArea(float r){
    return 3.14*r*r;
}
float squareArea(float side){
    return side*side;
}
float rectangleArea (float l,float b){
    return l*b;
}