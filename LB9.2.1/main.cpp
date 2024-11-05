// main.cpp


#include <stdio.h>
#include "var.h"

#define Z 2
#define SQR(x) (x) * (x)
#define MAX(y,z) ((y) > (z)) ? (y) : (z)
#define MIN(y,z) ((y) < (z)) ? (y) : (z)
#define ABS(res) ((res) > 0) ? (res) : (res) * -1 

#define PRINTI(w) puts("control output"); \
        printf (#w"= %f\n",(float)w)

int main()
{
    puts("Lab 13.2. Using macros and preprocessing directive");

    PRINTI(Z);

#if Z <= 3
    puts("define maximum of two numbers");
    puts("Input 2 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    w = MIN((x * y) + (y * Z), SQR((Z * x) + (y * Z)));
#else
    {
        puts("define maximum of two numbers");
        puts("Input 2 integer numbers");
        scanf_s("%d", &x);
        PRINTI(x);
        scanf_s("%d", &y);
        PRINTI(y);
        w = MAX(SQR(x + y), SQR(x - Z));
    }
#endif

    printf("%d\n", w);
}
