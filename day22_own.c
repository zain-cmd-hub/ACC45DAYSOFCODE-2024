#include <stdio.h>

int main() {
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    
    printf("the ASCII value of %c is : %d\n",ch,(int)ch);

    return 0;
}