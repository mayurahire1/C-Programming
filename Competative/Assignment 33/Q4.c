#include<stdio.h>
#include<stdbool.h>

int lastChar(char *str, char ch)
{
    int idx = 0;
    int iCount = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            idx = iCount;
            bFlag = true;
        }
        iCount++;
        str++;
    }

    if(bFlag)
    {
        return idx;
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

    iRet = lastChar(Arr, ch);

    printf("Character Last Occurence : %d", iRet);
    
    return 0;
}