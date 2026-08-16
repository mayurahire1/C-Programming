#include <stdio.h>

void strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s", Arr);

    strlenX(Arr);
    
    printf("String is: %s", Arr);

    return 0;
}