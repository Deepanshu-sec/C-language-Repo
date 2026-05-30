// write a function to reverse an array.//
#include <stdio.h>
void reverseArray(int arr[], int n);

int main(){
 int arr[]={10,20,30,40,50};
 reverseArray(arr,5);
    return 0;
}

void reverseArray(int arr[], int n){
 for(int i=0;i<n/2;i++){
    int firstvalue = arr[i];
    int lastvalue = arr[n-i-1];
    arr[i] = lastvalue;
    arr[n-i-1]= firstvalue;
 } 
 for(int i =0;i<n;i++){
    printf("%d \t",arr[i]);
 }
 printf("\n");
 return 0;
}