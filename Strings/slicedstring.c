// write a function named slice, which takes a string & return a sliced string from index n to m. //
#include<stdio.h> // --> yaani index n se m tak jo bhi likha hoga vo return karega.<-- 

void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for (int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
     newstr[j]='\0';
    puts(newstr);
}
int main(){
char str[]="HelloDeepanshu..AND..";
 slice(str,4,19);
    return 0;
}