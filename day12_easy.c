#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X; cards
        scanf("%d %d", &N, &X);
        
        int face_down = N - X;
        
        int min_flips = (X < face_down) ? X : face_down;
        
        printf("%d\n", min_flips);
    }
    
    return 0;
}
