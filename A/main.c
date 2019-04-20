/* 
	C program to calculate the weighted average of a list of n numbers, using the formula
	x = f1x1 + f2x2 + f3x3 + .... + fnxn.

*/


#include <stdio.h>

float avg(float f[], float x[], float sum, int i);
int main() {

    float f[10];
    float x[10];
    int i = 0;
    float sumF = 0;
    while (++i <= 10){
        printf("f%d = ", i);
        scanf("%f", &f[i - 1]);
        printf("x%d = ", i);
        scanf("%f", &x[i - 1]);
        sumF += f[i - 1];
    }

    if (sumF != 1){
        printf("The summation of F must be equal to 1 \n");
    } else {
        printf("\n");
        printf("Weighted Average: %.3f \n", avg(f, x, 0, 0));
    }

    return 0;

}



float avg(float f[], float x[], float sum, int i){

    if (i > 9)
        return sum;
    sum += f[i] * x[i];
    return avg(f, x, sum, ++i);

}





