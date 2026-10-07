#include<stdio.h>

int main () {
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if (marks<30 && marks>=0) {
        printf("c \n");
    }
    else if(marks >=30 && marks <70 ) {
        printf("B \n");
    }
    else if(marks >=70 && marks <90) {
        printf("A \n");
    }
    else if(marks>90 && marks<=100) {
        printf("A+ \n");
    }
    else {
        printf("not a valid marks");
    }
    return 0;
}
