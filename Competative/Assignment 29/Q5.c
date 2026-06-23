#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7:00 AM\n");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10:30 AM\n");
    }
}

int main()
{
    char division = '\0';

    printf("Enter the Division : ");
    scanf("%c", &division);

    DisplaySchedule(division);

    return 0;
}
