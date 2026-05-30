#include<stdio.h>
int main (){
    int sp, cp;
    printf("Enter your cost price : ");
    scanf ("%d",&cp); 
    printf("Enter your selling price : "); 
      scanf ("%d",&sp);
    if (cp>sp) {
        printf ("loss");
        } 
    if (sp>cp) {
        printf ("profit");
             } 
    if (cp==sp) {
     printf ("No loss, No profit ");
             }
    return 0;
    }