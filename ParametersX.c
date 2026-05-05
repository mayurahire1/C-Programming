#include <stdio.h>

void Display(int No1, int No2)
{
    printf("%d %d\n", No1, No2);
}
int main()
{
    int a = 11, b = 21;
    Display(a, b);      // Call by value
    return 0;
}