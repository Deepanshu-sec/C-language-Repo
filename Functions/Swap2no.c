#include<stdio.h>
int main() {
    int a,b;
    printf ("Enter a : ");
    scanf ("%d",&a);
    printf ("Enter b : ");
    scanf ("%d",&b);
    // c = a;   --> ( Using third veriable )
    // a = b; 
    // b = c;
    a = a + b;  //--> ( without using third veriable ) 
    b = a - b;
    a = a - b;
    printf ("The value of a is = %d\n",a);
    printf ("The value of b is = %d",b);
    return 0;
}
