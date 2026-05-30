#include<stdio.h>
int main() {
    int x, y, sum;
    printf("ENTER THE FIRST NUMBER\n"); // (\n) se ham program me jo bhi value denge 
    scanf("%d",&x);                     // vo print wali command se niche aayegi;
    printf("ENTER THE SECOND NUMBER\n");
    scanf("%d", &y);
    sum = x + y;
    printf ("the sum of the numbers %d", sum);
    return 0;

}