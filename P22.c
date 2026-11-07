#include<stdio.h>
int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n>0) {
        printf("Positive no.");
        if(n%2==0) {
            printf("Even NO.");
        }
        else {
            printf("Odd NO.");
        }
    }
    else if(n<0) {
        printf("Negative no.");
        if(n%2==0) {
            printf("Even no.");
        }
        else {
            printf("Odd NO.");
        }
    }
    else {
        printf("No.is Zero ");
    }
    return 0;
}