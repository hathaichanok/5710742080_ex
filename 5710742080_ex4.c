#include <stdio.h>
int main()
{
    double x,y,z;
    char a,b;

    printf("Enter 2 Number : ");
    scanf("%lf %lf", &x, &y);
    printf("Enter operator(+ -) : ");
    scanf("%c%c", &a, &b);

    if (b == '+'){
        z = x+y;
        printf("result : %.2lf+%.2lf = %.2lf",x,y,z);
    }
    else if (b == '-'){
        z = x-y;
        printf("result : %.2lf-%.2lf = %.2lf",x,y,z);
    }
}
