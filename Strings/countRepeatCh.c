// write a program to count the repeated characters.//
#include<stdio.h>
#include<string.h>
int countccharacter(char arr[]){
   int count = 0, x;
   printf("Enter a character that count : ");
   scanf("%c",&x);
    for(int i=0; arr[i]!='\0';i++){
        if(arr[i]==x){
            count++;
        }
    } printf("Character repeat = %d time ",count);
}
int main(){
char name[100];
printf("Enter user's name : ");
fgets(name,100,stdin);
countcharacter(name);
    return 0;
}