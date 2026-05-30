// make a program that inputs user's name & print its lenght.//
#include<stdio.h>
int countlength(char arr[]);

int main (){
    char arr[100];
   printf("Enter user's name : ");
   fgets(arr,100,stdin);
  countlength(arr);
    return 0;
}
 int countlength(char arr[]){
    int count=0;
       for(int i=0;arr[i]!='\0';i++){
    count++;
       }
       printf("Name's Length is = %d",count-1);
 }