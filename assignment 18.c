#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], rev[100];
    int i, length = 0, flag = 1;

    // Input strings
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string: ");
    scanf("%s", str2);

    // Find length
    while (str1[length] != '\0')
    {
        length++;
    }
    printf("\nLength of string = %d", length);

    // Reverse string
    for (i = 0; i < length; i++)
    {
        rev[i] = str1[length - i - 1];
    }
    rev[i] = '\0';

    printf("\nReversed string = %s", rev);

    // Palindrome check
    for (i = 0; i < length; i++)
    {
        if (str1[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("\nThe string is a Palindrome");
    else
        printf("\nThe string is NOT a Palindrome");

    // Equality check
    if (strcmp(str1, str2) == 0)
        printf("\nStrings are Equal");
    else
        printf("\nStrings are NOT Equal");

    // Substring check
    if (strstr(str1, str2) != NULL)
        printf("\nSubstring found in main string");
    else
        printf("\nSubstring NOT found");

}
