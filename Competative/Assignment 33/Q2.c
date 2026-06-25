#include<stdio.h>

int countChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", Arr);

    printf("Enter the character to be search : ");
    scanf(" %c", &ch);

    iRet = countChar(Arr, ch);

    printf("Character Frequency : %d", iRet);
    
    return 0;
}