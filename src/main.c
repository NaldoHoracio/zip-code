#include <stdio.h>
#include "read_file.h"

int main()
{
    print();
    double a, b, result;
    a = 15.0;
    b = 25.0;

    result = horacio_sum(a, b);

    printf("Result of %.2lf + %.2lf = %.2lf\n", a, b, result);

    return 0;
}