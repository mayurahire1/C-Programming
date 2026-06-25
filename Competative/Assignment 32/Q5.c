#include<stdio.h>

int countWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ' )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string :");
    scanf("%[^\n]s", arr);

    iRet = countWhite(arr);

    printf("Number of white spaces: %d", iRet);
    
    return 0;   
}