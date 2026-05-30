// write a program to insert an element at the end of an array. //
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 5;
    arr[4] = n;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}