#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is a Small Letter");
    }
    else
    {
        printf("It is not a Small Letter");
    }

}