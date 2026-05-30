// ques--> Write a function to print namaste if user is indian & print bonjour if user is french.

#include<stdio.h>
void printNamaste();
void printBonjour();

int main (){
  printf ("Enter f for french & i for indian : ");
  char ch;
  scanf ("%c",&ch);
  if (ch=='i'){
    printNamaste();
  }
  else {
    printBonjour();
  }
    return 0;
}

void printNamaste(){
    printf ("Namaste\n");
}

void printBonjour() {
    printf ("Bonjour\n");
}