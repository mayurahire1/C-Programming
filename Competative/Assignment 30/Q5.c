#include<stdio.h>

void Display(char ch)
{
    printf("Character : %c\n", ch);
    printf("Decimal : %d\n", ch);
    printf("Hexadecimal : 0X%x\n", ch);
    printf("Octal : 0%o\n", ch);
}

int main()
{
    char chValue = '\0';

    printf("Enter a character : ");
    scanf("%c", &chValue);

    Display(chValue);

    return 0;
}