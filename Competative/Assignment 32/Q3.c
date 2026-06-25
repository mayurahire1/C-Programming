#include<stdio.h>

void strTogggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; 
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32; 
        }
        *str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string :");
    scanf("%[^\n]s", arr);

    strTogggleX(arr);

    printf("Modifies string is : %s", arr);

    return 0;
}