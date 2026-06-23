#include<stdio.h>
#include<stdbool.h>

bool checkDigit(int ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c", &cValue);

    bRet = checkDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

}