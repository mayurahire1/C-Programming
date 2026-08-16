#include <stdio.h>

int CountSpace(const char *str) 
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
            iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpace(Arr);

    printf("Frequency is: %d", iRet);

    return 0;
}