#include <stdio.h>

int main() {
    int T, S, X, Y, Z, apps_to_delete;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &S, &X, &Y, &Z);

        int total_occupied = X + Y;

        int required_free_space = Z;

        if (total_occupied <= required_free_space) {
            apps_to_delete = 0;
        } else {
          
            apps_to_delete = 1;
        }

        printf("%d\n", apps_to_delete);
    }

    return 0;
}