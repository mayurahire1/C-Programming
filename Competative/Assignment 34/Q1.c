#include<stdio.h>

void strCpyX(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0'; 
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    strCpyX(Arr,Brr);

    printf("%s", Brr);

    return 0;
}