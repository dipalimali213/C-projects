#include <stdio.h>
int main()
{
    int n;
	printf("Enter a Number : "); 
    scanf("%d",&n);
    
    int sum = n*(n+1)/2;

    printf("The sum is %d",sum);
    
    return 0;
}
