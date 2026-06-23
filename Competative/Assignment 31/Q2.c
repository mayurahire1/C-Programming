#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Number of small characters: %d", iRet);

    return 0;
}