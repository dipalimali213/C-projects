#include <stdio.h>
int main ()
{
    int num1, num2, num3;
    
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    printf("Enter 3rd Number : ");
    scanf("%d",&num3);

    if ((num1 >= num2) && (num1 >= num3))
        printf("%d is the greatest", num1);
        

    else if ((num2 >= num1) && (num2 >= num3))
         printf("%d is the greatest", num2);
    

    else
         printf("%d is the greatest", num3);
    
    return 0;
}
