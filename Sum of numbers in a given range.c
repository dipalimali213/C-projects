#include <stdio.h>

int main()
{
    int a , b ,i ;
    printf("Enter a starting Number : ");
    scanf("%d",&a);
    printf("Enter a ending Number : ");
    scanf("%d",&b);
    int sum = 0;
    
    for (i = a; i <= b; i++)
        sum = sum + i;
    
    printf("Sum = %d",sum);
    
    return 0;
}
