#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int i = 0; i < T; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int X= (a > b ? a : b) + (c > d ? c : d); 
        // ? its stand for if else statement 
        printf("%d\n", &X);
    }

    return 0;
}
