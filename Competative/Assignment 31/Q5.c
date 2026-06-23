#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;

    while (*str != '\0')
    {
        str++;
    }
    str--;

    end = str;

    while(end >= start)
    {
        printf("%c", *end);
        end--;
    }
    

}
int main()
{
    char Arr[20];

    printf("Enter a string: ");
    scanf("%[^\n]s", Arr);

    Reverse(Arr);
    
    return 0;
}