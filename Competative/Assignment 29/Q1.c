#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c", &cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a character");
    }
    else
    {
        printf("It is not a character");
    }

}