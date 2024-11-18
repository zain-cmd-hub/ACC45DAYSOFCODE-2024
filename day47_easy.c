#include <stdio.h>

int main() {
    int T, N, X;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &X);

        if (N * N == X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;