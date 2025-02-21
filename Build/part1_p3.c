#include <stdio.h>

int main()
{
    int n, prev_n;
    int count_positive = 0, count_zero = 0, count_negative = 0;
    int first_input = 1;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (!first_input && n == prev_n)
        {
            break;
        }
        if (n > 0)
        {
            count_positive++;
        }
        else if (n == 0)
        {
            count_zero++;
        }
        else
        {
            count_negative++;
        }
        prev_n = n;
        if (first_input)
        {
            first_input = 0;
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n == prev_n)
            {
                break;
            }
            if (n > 0)
            {
                count_positive++;
            }
            else if (n == 0)
            {
                count_zero++;
            }
            else
            {
                count_negative++;
            }
        }
        first_input = 0;
        printf("Number of positive numbers: %d\n", count_positive);
        printf("Number of negative numbers: %d\n", count_negative);
        printf("Number of zeros: %d\n", count_zero);
    }

    return 0;
}