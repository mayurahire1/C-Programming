#include <stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo Arr[4];

    printf("Size of Arr is: %lu\n",sizeof(Arr)); //32

    Arr[0].i = 11;
    Arr[0].f = 11.0;

    Arr[1].i = 21;
    Arr[1].f = 21.0;

    Arr[2].i = 51;
    Arr[2].f = 51.0;

    Arr[3].i = 101;
    Arr[3].f = 101.0;

    printf("%d\n",Arr[2].i); //51
    printf("%f\n",Arr[1].f); //21.0

    


    return 0;
}