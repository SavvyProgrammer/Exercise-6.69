/*
 * C program to calculate the geometric average of a list of numbers, using the formula
 * x = [x1x2x3 .... xn]^1/n
 *
 */

#include <stdio.h>
#include <math.h>


double ave(float x[], int n);
int main() {
    int n;
    printf("Enter the number of data items: ");
    scanf("%d", &n);
    float x[n];
    int i = 0;
    while (++i <= n) {
        printf("Data item %d: ", i);
        scanf("%f", &x[i - 1]);
    }
    printf("Geometric Average: %f \n", ave(x, n));
    return 0;
}

double ave(float x[], int n){
    double mul = 1;
    for (int i = 0; i < n; i++){
       mul *= x[i];

    }
    return pow(mul, 1.0f/n);

}

