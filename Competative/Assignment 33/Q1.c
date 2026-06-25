#include<stdio.h>
#include<stdbool.h>

bool checkChar(char *str, char ch)
{
    // bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool bRet = false;

    printf("Enter a string: ");
    scanf("%[^\n]s", Arr);

    printf("Enter the character to be search : ");
    scanf(" %c", &ch);

    bRet = checkChar(Arr, ch);

    if(bRet == true)
    {
        printf("Character present");
    }
    else
    {
        printf("Character not present");
    }

    return 0;
}