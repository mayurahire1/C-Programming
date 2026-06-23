#include<stdio.h>
#include<stdbool.h>

bool checkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'O' || *str == 'U' || *str == 'I' ||
        *str == 'a' || *str == 'e' || *str == 'o' || *str == 'u' || *str == 'i')
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;

}
int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter a string: ");
    scanf("%[^'\n']s", Arr);

    bRet = checkVowel(Arr);

    if(bRet == true)
    {
        printf("String contains vowels ");
    }
    else
    {
        printf("String does not contains vowels ");
    }
    
    return 0;
}