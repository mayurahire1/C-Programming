#include<stdio.h>
#define PI 3.14

double CircleArea(float iRadius)
{
    double dArea = 0.0;

    dArea = PI * iRadius * iRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The Area of circle is: %f",dRet);

    return 0;
}
