 #include <stdio.h>

int main() {
    int num = 10; 

    printf("Initial value: %d\n", num);

    num += 5; 
    printf("After num += 5: %d\n", num);

    num -= 3; 
    printf("After num -= 3: %d\n", num);

    num *= 2;  
    printf("After num *= 2: %d\n", num);

    num /= 4;  
    printf("After num /= 4: %d\n", num);

    num %= 3; 
    printf("After num %%= 3: %d\n", num);

    return 0;
}
