#include <stdio.h>
int main()
{
    int ram, syam, ajay;
    printf("Enter the age of ram : ");
    scanf("%d", &ram);
    printf("Enter the age of syam : ");
    scanf("%d", &syam);
    printf("Enter the age of ajay : ");
    scanf("%d", &ajay);
    if (ram < syam && ram < ajay)
    {
        printf("ram is youngest : ");
    }
    else if (syam < ram && syam < ajay)
    {
        printf("syam is youngest : ");
    }
    else if (ajay < ram && ajay < syam)
    {
        printf("ajay is youngest : ");
    }
    return 0;
}