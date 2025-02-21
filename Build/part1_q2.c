#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n = 0, i = 0, sum = 0, term = 0;
    bool overflow = false;

    printf("Please enter a value for n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = (term * 10) + 9;
        sum += term;

        // check for overflow before proceed
        if (sum > INT_MAX || term > INT_MAX || sum < 0 || term < 0)
        {
            printf("\nOverflow occurred before reaching %d terms.\n", n);
            overflow = true;
            break;
        }
        printf("%d", term);
        if (i < 9)
        {
            printf(" + ");
        }
        else
        {
            printf("\n");
        }
    }

    if (overflow == false)
    {
        printf("\nWhen we reach %d terms, Sum = %d.\n", n, sum);
    }
    printf("The largest term can be calculated without error is: 9\n");
    return 0;
}
