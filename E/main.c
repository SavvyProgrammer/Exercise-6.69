// Fibonacci 

#include <stdio.h>

void fibonacci(int n, int i, int fib, int var1);

int main() {
    int n;
    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d", &n);
    fibonacci(n, 0, 0, 1);
    return 0;
}

void fibonacci(int n, int i, int fib, int var1){
    if (fib == 0)
        printf("%d ", 1);
    if (i < n - 1){
        fib = fib + var1;
        printf("%d ", fib);
        fibonacci(n, ++i, var1, fib);
    }


}
