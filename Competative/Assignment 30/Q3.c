#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch ; i <= 'Z'; i++)
        {
            printf("%c  ", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch ; i >= 'a'; i--)
        {
            printf("%c  ", i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char chValue = '\0';

    printf("Enter a character : ");
    scanf("%c", &chValue);

    Display(chValue);

    return 0;

    return 0;
}