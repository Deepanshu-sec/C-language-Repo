#include<stdio.h>
int main (){
    char *changestr="HELLO DEEPANSHU";
    puts(changestr);
     changestr="Hello World";
     puts(changestr);
    char arr[]= "HELLO DEEPANSHU";
    puts(arr);
    // arr[]="hello World";  //--> ye nahi kar sakte.
    // puts(arr);
    return 0;
}