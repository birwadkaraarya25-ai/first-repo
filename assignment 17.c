#include <stdio.h>

int main() 
{
    int n, i;
    float x, term, sum = 0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;  

    for (i = 1; i <= n; i++) 
    {
        sum += sign * term;

        
        term = term * x * x / ((2 * i) * (2 * i + 1));

        sign = -sign; 
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}
