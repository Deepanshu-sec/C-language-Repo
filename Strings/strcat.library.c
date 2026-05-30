#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[100] = "Hello ";
    char secstr[] = "Deepanshu";
    strcat(firststr, secstr);
    puts(firststr);
    return 0;
}