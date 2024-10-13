#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int pages = N * 1000; 
        int notebooks = pages / 100;
     printf("%d\n", notebooks);
    }

    return 0;
}
