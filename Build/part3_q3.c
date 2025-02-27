#include <stdio.h>

int main()
{
    int n, reversed = 0, remainder;

    printf("Input a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("The number in reverse order is: %d\n", reversed);

    return 0;
}
