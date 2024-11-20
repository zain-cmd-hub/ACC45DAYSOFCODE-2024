#include <stdio.h>

int main() {
    int T, N, i, sum, count;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        sum = 0;
        count = 0;

        for (i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            sum += num;
        }
        if (sum == 0) {
            printf("0\n");
            continue;
        }
        if (sum % 2 != 0) {
            printf("-1\n");
            continue;
        }
        for (i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (num == -1) {
                count++;
            }
        }
        printf("%d\n", abs(count - sum / 2));
    }

    return 0;
}