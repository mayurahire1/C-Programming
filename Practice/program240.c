#include <stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter a String : ");
    scanf("%s", Arr);               // ISSUE : space ignored by scanf

    printf("Entered string is : %s\n", Arr);

    return 0;
}