#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], temp[100];
    int choice, len, result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    printf("\nMENU:\n");
    printf("1. Find Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            len = strlen(str1);
            printf("Length of first string = %d", len);
            break;

        case 2:
            strcpy(temp, str1);
            printf("Copied string = %s", temp);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated string = %s", str1);
            break;

        case 4:
            result = strcmp(str1, str2);
            if(result == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid choice!");
    }
}
