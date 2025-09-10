// check whether the string is a palindrome or not

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], temp[20];

    printf("Enter the name :");
    fgets(str, 20, stdin);
    fflush(stdin);

    int len = strlen(str);
    if (len > 0 && str[len-1]) 
    {
        str[len-1] = '\0';
    }

    strcpy(temp, str); 
    strrev(temp);  

    if (strcmp(str, temp) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}