#include <stdio.h>

int main() {
    int a, b, c, x;
    printf("total topics\n");
    scanf(" %d %d %d  %d ", &a,&b,&c,&x);
    
    if(x==a || x==b || x==c){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
    

    return 0;
}