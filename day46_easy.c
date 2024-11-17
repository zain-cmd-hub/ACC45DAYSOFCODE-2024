#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R); 
        int extra_sticks = R / 30;
        
        int total_sticks = X + extra_sticks;
        
        int plates_needed = (total_sticks + Y - 1) / Y;
   
        printf("%d\n", plates_needed);
    }

    return 0;
}
