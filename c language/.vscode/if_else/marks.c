// #include<stdio.h>
// int main () {
//     int x;
//     printf ("Enter the marks : ");
//     scanf ("%d",&x);
//     if (x>80) {
//         printf ("first grade :");
//     }
//     else {
//         if (x>60) {
//             printf ("second grade :");
//         }
//          else { if (x>40) {
//             printf ("third grade :");
//         } else { 
//             if (x<40) {
//                 printf ("fourth grade :");
//             }
//         }
//     } }
//     return 0;
//     }
#include<stdio.h>
int main () {
    int x;
    printf ("Enter the marks : ");
    scanf ("%d",&x);
    if (x>80) {
        printf ("1st grade :");
    } 
    else if (x>60) {
        printf ("2nd grade :");
    } 
    else if (x>40) {
        printf ("3rd grade :");
    } 
    else{
        printf ("D grade :");
    }
    return 0;
}