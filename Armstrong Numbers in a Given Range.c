#include<stdio.h>
#include<math.h>

int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x / 10;
    }
    return len;
}

void armstrong(int low, int high)
{
    int num;  // Declare 'num' outside the loop
    for (num = low; num <= high; num++)  // Now the 'for' loop works without issues
    {
        int sum = 0, temp, digit, len;
        temp = num;

        len = order(num);

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit, len);
            temp /= 10;
        }

        if (sum == num)
            printf("Armstrong Number : %d \n", num);
            
    }
}

int main()
{
    int low, high;

    printf("Enter a lower bounds: ");
    scanf("%d", &low);
    printf("Enter a upper bounds: ");
    scanf("%d",&high);

    armstrong(low, high);

    return 0;
}

