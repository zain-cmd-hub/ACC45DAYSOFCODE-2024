#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int first_part_time = Y / 2;

    int second_part_time = X - Y;

    int total_time = first_part_time + second_part_time;

    printf("%d\n", total_time);

    return 0;
}