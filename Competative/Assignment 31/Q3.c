#include<stdio.h>

int Diffrence(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }

        str++;
    }

    return (iCountSmall-iCountCapital);
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", Arr);

    iRet = Diffrence(Arr);

    printf("%d", iRet);

    return 0;
}