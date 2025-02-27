#include <stdio.h>

int main()
{
    unsigned int num1, num2, result;
    char op;

    while (1)
    {
        printf("Enter the first hex value (or type 'q' to quit): ");
        if (scanf("%x", &num1) != 1)
            break; // Exit if input is not a valid hex

        printf("Enter the second hex value: ");
        if (scanf("%x", &num2) != 1)
            break;

        printf("Enter the bitwise operator & - Bitwise AND, | - Bitwise OR, ^ - Bitwise XOR: ");
        scanf(" %c", &op); // Space before %c to skip any newline characters

        switch (op)
        {
        case '&':
            result = num1 & num2;
            break;
        case '|':
            result = num1 | num2;
            break;
        case '^':
            result = num1 ^ num2;
            break;
        default:
            printf("Invalid operator! Use &, |, or ^.\n");
            continue;
        }

        printf("Output: 0x%X\n", result);
    }

    printf("Exiting program.\n");
    return 0;
}
