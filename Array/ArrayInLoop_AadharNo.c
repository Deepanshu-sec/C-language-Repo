// write a program to store 5 aadhar numbers in an array and print them using pointer.//
#include<stdio.h>
int main (){
    int aadhar[5];
    int *ptr = &aadhar[0];    //--> without pointer me hame ye line likhne ki jarurat nhi hoti.
   
    for (int i=0;i<5;i++){
  printf ("Enter aadhar number : ");
  scanf ("%d",ptr+i);        //--> bas yaha ptr+i ki jagah &aadhar[i] likhna hoga.
    }
 
    for(int i=0;i<5;i++){
    printf("%d aadhar no. is = %d\n",i,*(ptr+i));  // or yaha pe *(ptr+i)==aadhar[i].
  }
    return 0;
    }
