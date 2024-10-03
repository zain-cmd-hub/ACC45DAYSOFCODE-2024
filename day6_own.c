//  code for if else passed in exam or fail due to the average marks in exam.


#include <stdio.h>

int main() {
    int marks1,marks2,marks3;
    
    printf("Enter marks1:\n");
    scanf("%d", &marks1);
    printf(" Enter marks2:\n");
    scanf("%d", &marks2);
    printf("Enter marks3:\n");
    scanf("%d", &marks3);
    
    printf("the marks are %d %d %d\n",marks1,marks2,marks3);
    
    if(marks1<33 || marks2<33 ||marks3<33){
        printf("you are failed in indivisual subject");
    }
    else if ((marks1+marks2+marks3)/3<40){
        printf("you are failed due to the percentage");
    }
    else{
        printf("you are passed");
    }

    return 0;
}