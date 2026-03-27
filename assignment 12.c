#include <stdio.h>

void main() 
{
    int a, b, i, gcd, scd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }


    for (i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            scd = i;
            break;
        }
    }

    printf("GCD = %d\n", gcd);

    if (scd > 1)
        printf("Smallest common divisor = %d\n", scd);
    else
        printf("No common divisor greater than 1\n");

}
