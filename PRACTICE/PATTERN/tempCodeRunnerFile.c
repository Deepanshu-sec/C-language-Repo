// Online C compiler to run C program online
#include <stdio.h>
int main() {
int n,nsp=n-1,nst=1;
printf ("Enter a number : ");
scanf("%d",&n);
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=nsp;j++){
        printf("  ");
    }
    for(int k=1;k<=nst;k++){
        printf("* ");
    }
    if(i<n){
        nsp--;
        nst+=2;
    }
    else{
    nsp++;
    nst-=2;
    }
    printf("\n");
}
return 0;
}
