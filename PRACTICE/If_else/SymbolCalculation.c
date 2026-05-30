#include<stdio.h>
int main(){
    char op;
    int a , b;
    scanf ("%d %c %d",&a,&op,&b);
    if (op=='+') printf ("Addition = %d",a+b);
    else if (op=='-') printf ("subtraction = %d",a-b);
    else if (op=='*') printf ("Multiplication = %d",a*b);
    else if (op=='/') printf ("Dividation = %d",a/b);
    else if (op=='%') printf ("Reminder = %d",a%b);
    else 
    printf ("Invalid Operators ");
    return 0;
}