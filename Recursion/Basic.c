#include <stdio.h>
void printHw(int count);

int main()
{
   printHw(5);
   return 0;
}

void printHw(int count)
{
   if (count == 0)
   {
      return;
   }
   printf("Hello world ");
   printHw(count - 1);
}