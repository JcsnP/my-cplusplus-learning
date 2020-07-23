#include <stdio.h>
#include <math.h>

int main(void){
    long double a, b;
    scanf("%.6f %.6f", &a, &b);
    printf("%.6f", pow(a, 2.0));
}