// find the salted form of a password entered by user if the salt is "123" & 
// added at the end. 
#include<stdio.h>
#include<string.h>
void salting(char str[]);

int main (){
    char password[100];
   scanf("%s",password);
 salting(password);
    return 0;
} 

void salting(char str[]){
    char newpass[200];
    char salt[] = "123";
    strcpy(newpass,str);
    strcat(newpass,salt);
    puts(newpass);
}