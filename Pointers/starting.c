#include<stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;

   // address ki printing .//
//    printf ("%p\n",&age);
//     printf ("%u\n",&age); 
//     printf ("%p\n",ptr);
//       printf ("%p\n",&ptr);

// value ki printing . //
printf ("%d\n",age);
printf ("%d\n",*ptr);
printf ("%d\n",*(&age));
    return 0;
}