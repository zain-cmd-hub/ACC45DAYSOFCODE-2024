#include <stdio.h>

int main() {
int t,n,x,subscriptions,cost;
    scanf("%d",&t);
    for (int i = 0;i<t;i++){
        scanf("%d%d",&n,&x);
        subscriptions = (n+5)/6;
        cost = subscriptions*x;
        printf("%d\n",cost);
    }
    return 0;
}

