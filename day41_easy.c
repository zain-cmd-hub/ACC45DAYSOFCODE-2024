#include <stdio.h>

int main() {
    int T, X, Y;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        int max_people = X / (2 * Y);
        printf("%d\n", max_people);
    }

    return 0;
}