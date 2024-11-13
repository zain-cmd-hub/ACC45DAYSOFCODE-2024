#include <stdio.h>

int main() {
    int T, A, B, C, min_price, total_price;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &A, &B, &C);

        min_price = A;
        if (B < min_price) {
            min_price = B;
        }
        if (C < min_price) {
            min_price = C;
        }

        total_price = A + B + C - min_price;

        printf("%d\n", total_price);
    }

    return 0;
}