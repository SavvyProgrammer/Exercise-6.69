#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++){
        for (int k = 10; k > i; k--) {
            printf(" ");
        }

        for (int j = i; j < 2 * i - 1; j++) {
            printf("%d", j % 10);
        }

        for (int j = 2 * i - 1;  j >= i ; j--) {
            printf("%d", j % 10);
        }

        printf("\n");
    }
    return 0;
}
