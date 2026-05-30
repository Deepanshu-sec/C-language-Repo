#include<stdio.h>

int main (){
    int l,b,area,perimeter;
    printf ("Enter the length : ");
    scanf ("%d",&l);
    printf ("Enter the breadth : ");
    scanf ("%d",&b);
    area = l*b;
    perimeter = 2*(l+b);
    if (area>perimeter) {
        printf ("Area is greater than perimeter ");
    } else {
        printf ("Area is less than perimeter ");
    }

    return 0;
}