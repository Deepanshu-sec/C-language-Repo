#include<stdio.h>
int main (){
    char name[50];
    printf ("Enter your name : ");
    scanf ("%s",name);  // scanf space k baad ka word trac nahi kar pata.//
    printf("your name is %s",name);
    return 0;
}
