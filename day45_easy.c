#include <stdio.h>

int main() {
    int T, N, coins;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        int free_gifts = N / 5;

        int paid_gifts = N - free_gifts;

        coins = paid_gifts;

        printf("%d\n", coins);
    }

    return 0;
}