#include<stdio.h>
int main (){
    int sp,cp;
    printf ("Enter the cost price : ");
    scanf ("%d",&cp);
    printf ("Enter the selling price : ");
    scanf ("%d",&sp);
    if (sp>cp) {
        printf ("Profit : ");
    } 
    else if (cp>sp) {
        printf ("Loss : ");
    } else {
        printf ("No profit,No loss : ");
    }
    return 0;
}