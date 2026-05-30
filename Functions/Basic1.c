#include<stdio.h>

//Funtion prototype 
void printHello();
void printGoodbye();

int main (){
    printHello();
    printGoodbye(); // function call 
return 0; 
}

//Function defination 
void printHello() {
    printf ("Hello\n");
    printf ("Deepanshu\n");
}

void printGoodbye() {
    printf ("Keep on\n");
    printf ("Good bye\n");
}