#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount1 = 0, iCount2 = 0;

    for(i = 1; i <= iRow; i++)
    {
        iCount1 = 2;
        iCount2 = 1;
        for(j = 1  ; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", iCount2);
                iCount2 = iCount2 + 2;
            }
            else
            {
                printf("%d\t", iCount1);
                iCount1 = iCount1 + 2;
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}