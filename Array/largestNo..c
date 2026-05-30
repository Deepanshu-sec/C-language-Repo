// write a program to print the largest number in an array. //
#include<stdio.h>
int main (){
    int arr[]={1,6,7,8,9,3,4};
    int largest=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
            }
            printf("Largest number is = %d",largest);

    return 0;
}



