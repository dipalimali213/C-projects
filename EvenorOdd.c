#include <stdio.h>
int main ()
{
    int number;
    printf ("Insert a number : ");
    scanf ("%d", &number);
    if (number % 2 == 0)
        printf ("Even Number.");
    else
        printf ("Odd Number");
  
    return 0;
}
