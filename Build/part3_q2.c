#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The even numbers are :");
    for (int i = 1; i <= n; i++)
    {
        int even_num = 2 * i;
        printf("%d ", even_num);
        sum += even_num;
    }

    printf("\nThe sum of even natural numbers up to %d terms: %d\n", n, sum);

    return 0;
}
