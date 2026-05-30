// create a 2D array to storing the tables of 2 & 3.  //
#include<stdio.h>
int main (){
 int table[2][10];
    
 for(int i=0;i<10;i++){
        table[0][i]= 2*(i+1);  //--> 0 row me 2 ka table store kar raha h .//
        table[1][i]=3*(i+1);   //--> 1 row me 3 ka table store kar raha h .//
       }
    printf("Table of 2 :\n ");
    for(int i=0;i<10;i++){   
    printf ("%d \t",table[0][i]);
           }
    printf("\nTable of 3 :\n ");
    for(int i=0;i<10;i++){
    printf("%d \t",table[1][i]);
    }
    return 0;
}
