#include <stdio.h>

int main() {
    int bike,car;
    scanf("%d",&bike);
    scanf("%d",&car);
    if(bike>car){
        printf("bike\n");
    }
    else if(car>bike){
        printf("car\n");
    }
else{
    printf("same");
}
    return 0;
}