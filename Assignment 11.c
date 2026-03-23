#include <stdio.h>
#include <math.h>

int main()
{
    int num, choice, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMENU:\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (num >= 0)
                printf("Square Root = %.2f\n", sqrt(num));
            else
                printf("Square root not possible for negative numbers\n");
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if (num <= 1)
            {
                printf("Number is Not Prime\n");
            }
            else
            {
                int isPrime = 1;
                for (i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime)
                    printf("Number is Prime\n");
                else
                    printf("Number is Not Prime\n");
            }
            break;

        case 5:
            if (num < 0)
            {
                printf("Factorial not possible for negative numbers\n");
            }
            else
            {
                for (i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }
                printf("Factorial = %lld\n", fact);
            }
            break;

        case 6:
            if (num <= 1)
            {
                printf("No prime factors\n");
            }
            else
            {
                printf("Prime Factors: ");
                for (i = 2; i <= num; i++)
                {
                    while (num % i == 0)
                    {
                        printf("%d ", i);
                        num = num / i;
                    }
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
