#include <stdio.h>
#include <math.h>
    int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int rounds = (int)(log2(N));
        int total_time = 0;
        
        total_time += rounds * A; 
        
        if (rounds > 0) {
            total_time += (rounds - 1) * B;
        }
        printf("%d\n", total_time);
    }
    return 0;
}