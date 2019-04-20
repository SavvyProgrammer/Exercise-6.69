#include <stdio.h>
#include <math.h>


int factorial(int fact);

double sinx(int x, int n);

int main() {
    int n, x;
    printf("enter number of terms: ");
    scanf("%d", &n);
    printf("enter value for x: ");
    scanf("%d", &x);
    printf("\n");
    printf("sin(x) = %f\n", sinx(x, n));
    return 0;
}

int factorial(int fact) {
    if (fact == 0)
        return 1;
    return fact * factorial(fact - 1);
}

double sinx(int x, int n){
    int i = 0;
    int y = 1;
    double sum = pow(x, 1) / factorial(1);
    while (++i < n){
        y += 2;
        if (i % 2 == 1){
            sum -= pow(x, y) / factorial(y);
        } else
            sum += pow(x, y) / factorial(y);
    }

    return sum;
}
