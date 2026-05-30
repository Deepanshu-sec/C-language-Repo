// write a function to print numbers stored in an array using pointer.//
#include<stdio.h>

int printNumbers(int arr[],int n){
    for(int i=0;i<n;i++){
  printf ("%d \t",arr[i]);
 }
printf("\n");
}

int main(){
 int n;
 int arr[]={10,20,30,40,50};
  printNumbers(arr,5);
    return 0;
}
