#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char chValue = '\0';

    printf("Enter a character : ");
    scanf("%c", &chValue);

    Display(chValue);

    return 0;
}