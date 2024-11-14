#include <stdio.h>

int main() {
    int T, N, X, P;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &X, &P);

        int correct_marks = X * 3;
        int incorrect_marks = (N - X) * -1;
        int total_marks = correct_marks + incorrect_marks;

        if (total_marks >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}