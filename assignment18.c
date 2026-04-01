#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], str2[100], rev[100], sub[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    printf("Enter another string: ");
    gets(str2);

    printf("Enter substring: ");
    gets(sub);

    while (str[len] != '\0')
        len++;

    printf("Length of string: %d\n", len);

    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    if (strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    if (strstr(str, sub) != NULL)
        printf("Substring found\n");
    else
        printf("Substring not found\n");
}
