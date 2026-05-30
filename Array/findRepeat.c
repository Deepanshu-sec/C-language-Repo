// in an array of numbers, find how many times does a number 'x' occurs. //
#include<stdio.h>
int main (){
    int n, arr[100],x,count=0;
    printf ("Enter the number of elements = ");
    scanf("%d",&n);

    printf ("Enter elements of array = ");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    printf ("Enter number to be find = ");
    scanf("%d",&x);
    
    for(int i=0;i<n;i++){
  if (arr[i]==x){
    count++;
  }
    }
    printf ("The number %d is repeated %d times :",x,count);
           return 0;
}
        