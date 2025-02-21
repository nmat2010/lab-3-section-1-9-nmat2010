#include <stdio.h>

int is_prime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void find_primes(int start, int end)
{
    printf("The prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int start, end;

    printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);

    find_primes(start, end);

    return 0;
}
