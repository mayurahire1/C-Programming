#include<stdio.h>
#include<stdbool.h>

bool checkSpecial(char ch)
{
    if( ch >= '!' && ch <= '/' ||
        ch >= ':' && ch <= '@' ||
        ch >= '[' && ch <= '`' ||
        ch >= '{' && ch <= '~' )
        {
            return true;
        }

        return false;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c", &ch);

    bRet = checkSpecial(ch);

    if(bRet == true)
    {
        printf("It is a Special symbol");
    }
    else
    {
        printf("It is not a Special symbol");
    }
    return 0;
}