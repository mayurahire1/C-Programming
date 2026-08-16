#include <stdio.h>

void Update(char *str) 
{

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter a String : ");
    scanf("%[^'\n']s", Arr);

    Update(Arr);
    printf("Updated String is: %s", Arr);

    return 0;
}