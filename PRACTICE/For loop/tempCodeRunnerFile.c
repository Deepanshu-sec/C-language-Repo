// WAP to print the factors of a number. //
#include<stdio.h>
int main(){
    int n;
    printf ("Enter a number : ");
    scanf("%d ",&n);
    for (int i=1; 1<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}