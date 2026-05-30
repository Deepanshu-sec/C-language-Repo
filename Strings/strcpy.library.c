#include<stdio.h>
#include<string.h>
int main(){
    char newstr[] = "New deepanshu";
    char oldstr[] = "Old Deepanshu";
    strcpy(newstr, oldstr);
    puts(newstr);
       return 0;
}