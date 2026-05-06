#include<stdio.h>

int no=11;      // Global Variable  (DATA)

void fun()
{
    int i=51;       // Local Variable (STACK)
    printf("Inside fun : %d\n",i);
    printf("Inside fun : %d\n",no);

}

int main()
{
    int i=21;       // Local Variable (STACK)
    printf("Inside main : %d\n",i);
    printf("Inside main : %d\n",no);

    fun();

    return 0;
}