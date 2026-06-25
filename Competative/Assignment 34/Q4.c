#include<stdio.h>

void strNcpyX(char *str1, char *str2)
{
    
    while((*str1 != '\0'))
    {
        if(*str1 >= 'a' && *str1 <= 'z')
        {
            *str2 = *str1;
            str2++;
        }
        
        str1++;
    }
    *str2 = '\0'; 
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    strNcpyX(Arr,Brr);

    printf("%s", Brr);

    return 0;
}