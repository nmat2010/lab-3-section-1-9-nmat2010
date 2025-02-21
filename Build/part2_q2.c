#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char ch;

    while (1)
    {
        printf("Enter a character (# to exit): ");
        scanf(" %c", &ch);

        if (ch == '#')
        {
            printf("End of the Program.\n");
            break;
        }

        if (!isalpha(ch))
        {
            printf("Invalid input.\n");
        }
        else if (is_vowel(ch))
        {
            printf("%c is a vowel.\n", tolower(ch));
        }
        else
        {
            printf("%c is a consonant.\n", tolower(ch));
        }
    }

    return 0;
}
