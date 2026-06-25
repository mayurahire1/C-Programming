#include<stdio.h>
#include<stdbool.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    end = str;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        end--;
        start++;
    }    
}

int main()
{
    char Arr[20];

    printf("Enter a string: ");
    scanf("%[^\n]s", Arr);

    strrevX(Arr);

    printf("Reversed String is : %s" ,Arr);
    
    return 0;
}