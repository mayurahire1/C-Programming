/*

    Input : 5
    Outut : #   1   *   #   2   *   #   3   *   #   4   *
    
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++ )
    {
       printf("#\t%d\t*\t", i);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);
}