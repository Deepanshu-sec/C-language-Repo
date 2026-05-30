// write a function to calculate odd numbers in an array.//
#include<stdio.h>

int countodd(int arr[],int n){
int count = 0;
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        count++;
    } 
} return count;
} 
int main (){
 int arr[]={1,2,3,6,34,45,67,9};
 printf ("Number of odd elements is = %d\n",countodd(arr,8));
    return 0;
}