// Create a string first name & last name to store details of user and print all the characters
// using loop.   
#include<stdio.h>
void printstring(char arr[]){
 for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
 }
 }

int main (){
    char firstname[]="Deepanshu ";
    char lastname[]="Rajput";
    printstring(firstname);
    printstring(lastname);
       return 0;
}