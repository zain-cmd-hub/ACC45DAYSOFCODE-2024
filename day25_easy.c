#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); 

        int maxTastiness = 0;
        maxTastiness = (a + c > maxTastiness) ? (a + c) : maxTastiness; 
        maxTastiness = (a + d > maxTastiness) ? (a + d) : maxTastiness; 
        maxTastiness = (b + c > maxTastiness) ? (b + c) : maxTastiness;
        maxTastiness = (b + d > maxTastiness) ? (b + d) : maxTastiness;
        
        printf("%d\n", maxTastiness);
    }

    return 0;
}