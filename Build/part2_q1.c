#include <stdio.h>

int main()
{
    float num, smallest, second_smallest, third_smallest, largest;
    int count = 0, n, largest_streak = 1;

    printf("Enter the number of iterations(n), should be greater than or equal to 3: ");
    scanf("%d", &n);
    printf("\n");
    if (n < 3)
    {
        printf("n should be at least 3.\n");
        return 1;
    }

    smallest = second_smallest = third_smallest = largest = __FLT_MAX__;

    while (1)
    {
        printf("Enter a decimal number: ");
        scanf("%f", &num);
        count++;

        if (count == 1)
        {
            smallest = second_smallest = third_smallest = largest = num;
        }
        else
        {
            if (num < smallest)
            {
                third_smallest = second_smallest;
                second_smallest = smallest;
                smallest = num;
            }
            else if (num < second_smallest)
            {
                third_smallest = second_smallest;
                second_smallest = num;
            }
            else if (num < third_smallest)
            {
                third_smallest = num;
            }
            else
            {
                if (num > third_smallest && third_smallest == second_smallest)
                {
                    third_smallest = num;
                }
                if (third_smallest > second_smallest && second_smallest == smallest)
                {
                    second_smallest = third_smallest;
                }
            }
            if (num >= largest)
            {
                largest = num;
                largest_streak = 1;
            }
            else
            {
                largest_streak++;
            }
        }

        printf("Count: %d - Smallest: %.2f - second_smallest: %.2f - third_smallest: %.2f - Largest: %.2f\n",
               count, smallest, second_smallest, third_smallest, largest);

        if (largest_streak >= n)
        {
            break;
        }

        printf("\n");
    }

    return 0;
}