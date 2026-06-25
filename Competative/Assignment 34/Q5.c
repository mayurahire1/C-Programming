#include<stdio.h>

void strCatX(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystem";
    char brr[20] = " Logic Building";
    
    strCatX(arr, brr);

    printf("%s", arr);

    return 0;
}