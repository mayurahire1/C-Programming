#include<stdio.h>

void ReverseDisplay(char *str)
{
    printf("%s", str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter a string : ");
    scanf("%[^'\n']s", Arr);

    ReverseDisplay(Arr);

    return 0;
}