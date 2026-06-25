#include<stdio.h>

void strNcpyX(char *str1, char *str2, int iNo)
{
    
    while((*str1 != '\0') && (iNo != 0))
    {
        *str2 = *str1;
        str1++;
        str2++;
        iNo--;
    }
    *str2 = '\0'; 
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    strNcpyX(Arr,Brr,10);

    printf("%s", Brr);

    return 0;
}