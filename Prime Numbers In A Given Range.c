#include <stdio.h>
#include <math.h>

int checkPrime(int num) {
    if (num < 2) {
        return 0;
    } else {
        int i;
        for (i = 2; i <= sqrt(num); i++) { // Declare 'i' outside the loop
            if (num % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int a, b;
    printf("Enter a Start bound : ");
    scanf("%d",&a);
    printf("Enter a End bound : ");
    scanf("%d",&b);

    int i; // Declare 'i' outside the loop
    for (i = a; i <= b; i++) {
        if (checkPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
//Time Complexity: O(N*sqrt(N))
//Space Complexity O(1)
