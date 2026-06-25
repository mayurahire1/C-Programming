#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCount++;
        str++;
    }

    if(bFlag)
    {
        return iCount;
    }
    else
    {
        return -1;
    }

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

    iRet = FirstChar(Arr, ch);

    printf("Character First Occurence : %d", iRet);
    
    return 0;
}