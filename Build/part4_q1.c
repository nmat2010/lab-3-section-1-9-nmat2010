#include <stdio.h>
#include <math.h>

int main()
{
    double x, a, term, sum = 1.0;
    int n = 1;

    printf("Please enter a value for x: ");
    scanf("%lf", &x);
    printf("Please enter a precision value for a: ");
    scanf("%lf", &a);

    if (fabs(x) >= 1.0)
    {
        printf("Error: |x| must be less than 1 for convergence.\n");
        return 1;
    }

    printf("Taylor Series 1 / (1 - x) 1st Order Sum = %.6f.\n", sum);

    term = x;

    while (fabs(term) >= a)
    {
        sum += term;
        printf("Taylor Series 1 / (1 - x) %dth Order Sum = %.6f.\n", n + 1, sum);
        term *= x;
        n++;
    }

    printf("Final result: %.6f\n", sum);
    return 0;
}
