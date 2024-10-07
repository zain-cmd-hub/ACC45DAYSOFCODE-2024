#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A; 
        scanf("%d %d", &N, &A);
        int U = N - A; 
        int min_Masks = (A < U) ? A : U;
        printf("%d\n", min_Masks);
    }

    return 0;
}
