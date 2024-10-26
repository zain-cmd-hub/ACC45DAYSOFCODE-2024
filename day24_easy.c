#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N; 
        scanf("%d", &N);
        
        int count = 0;
        for (int day = 2; day <= N; day += 7) {
            count++;
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
