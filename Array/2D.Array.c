#include<stdio.h>

int main(){
    int arr[2][3] = { {78,79,64,}, {89,38,90}};  
  // arr[0][0] = 78;    //-->Means first student k first subject k marks//
  //  arr[0][1] = 79;  
  //   arr[0][2] = 80;          // 0 = first, 1 = second//
  //   arr[1][0] = 81;  //-->Means second student k first subject k marks//
  //   arr[1][1] = 38;  
  //   arr[1][2] = 48;  
   printf("%d\n",arr[1][1]); 
    return 0;
}