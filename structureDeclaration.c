#include <stdio.h>

// Declaration
struct Demo
{
    int i;   // 4
    float f; // 4
}; // 8

int main()
{
    struct Demo dobj;

    printf("%d\n", sizeof(dobj)); //8

    return 0;
}