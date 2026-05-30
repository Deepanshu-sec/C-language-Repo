#include<stdio.h>
int main () {
    int i,n,a;
    printf ("Enter a number : ");
    scanf ("%d",&n);
    for (i=2; i<n; i++) { // agar break na lagaye to 2 se lekar number(n) se ek kam tak(according        
    if (n%i==0) {          // to condition) jitne bhi fector honge utni baar print chalega break
                           // lagane se sirf ye batayega ki number composite h 
     a = 1;
     break;
    }
 }
 if (n==1) printf ("1 is neither prime nor composite :\n");
else if (a==0) printf ("Prime number :\n"); 
  else printf ("Composite number :\n"); 
      return 0;
}