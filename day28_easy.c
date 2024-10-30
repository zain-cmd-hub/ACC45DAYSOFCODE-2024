#include <stdio.h>
#include <math.h>

int main() {
    int T, A, B, K, steps;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A, &B, &K);

        int diff = abs(A - B);

        if (diff == 0) {
            steps = 0;
        } else {
            steps = ceil((double)diff / K);
        }

        printf("%d\n", steps);
    }

    return 0;
}