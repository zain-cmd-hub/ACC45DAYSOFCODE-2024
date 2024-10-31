#include <stdio.h>

int main() {
    int T, P, Q;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &P, &Q);

        int total_serves = P + Q;
        int alice_serves = total_serves / 2;

        if (alice_serves % 2 != 0) {
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }

    return 0;
}