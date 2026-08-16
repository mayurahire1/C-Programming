#include <stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter a String : ");
    scanf("%[^'\n']s", Arr);

    printf("Entered string is : %s\n", Arr);

    return 0;
}
