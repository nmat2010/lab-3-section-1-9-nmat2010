#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int count = 0;
    float num, sum_positive = 0, sum_negative = 0;
    int count_positive = 0, count_negative = 0;

    while (count < 15)
    {
        printf("Please input a decimal value: ");
        scanf("%f", &num);

        if (num > 0)
        {
            // detect positive overflow
            if (sum_positive + num > FLT_MAX)
            {
                printf("Overflow detected in positive sum.\n");
                return 1;
            }
            // compute positive sum if no overflow detected
            sum_positive += num;
            count_positive++;
        }
        else if (num < 0)
        {
            // detect negative overflow
            if (sum_negative + num < -FLT_MAX)
            {
                printf("Overflow detected in negative sum.\n");
                return 1;
            }
            // compute negative sum if no overflow detected
            sum_negative += num;
            count_negative++;
        }
        count++;
    }

    // make sure there is a postive number entered
    if (count_positive > 0)
        printf("Average of Positive Numbers = %f.\n", sum_positive / count_positive);
    else
        printf("No positive numbers entered.\n");

    // make sure there is a negative number entered
    if (count_negative < 0)
        printf("Average of Negative Numbers = %f.\n", sum_negative / count_negative);
    else
        printf("No negative numbers entered.\n");

    return 0;
}
