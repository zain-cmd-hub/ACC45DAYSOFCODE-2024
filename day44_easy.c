#include <stdio.h>

int main() {
    int T, N, A, B, odd_count, even_count;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &A, &B);

        odd_count = N / 2;
        even_count = N - odd_count;

        int total_duration = odd_count * A + even_count * B;
        printf("%d\n", total_duration);
    }

    return 0;
}