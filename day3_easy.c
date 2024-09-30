#include <stdio.h>


int main() {
int num1, num2, num3,num4,num5;
int sum;
printf("Total hours work on monday: ");
scanf("%d", &num1);
printf("Total hours work on tuesday: ");
scanf("%d", &num2);
printf("total hours work on tuesday: ");
scanf("%d", &num3);
printf("Total hours work on wednesday: ");
scanf("%d", &num4);
printf("Totak hours work on chill day (friday): ");
scanf("%d", &num5);
sum = num1 + num2 + num3 + num4 + num5;
printf("Total hours work on the weekend: %d\n", sum);
return 0;
}
