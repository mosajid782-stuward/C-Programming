#include<stdio.h>
int main() {
    float l,b,h;
    printf("Enter length :");
    scanf("%f",&l);
    printf("Enter breadth :");
    scanf("%f",&b);
    printf("Enter hight :");
    scanf("%f",&h);
    printf("Area is :%.2f",l*b*h);
    return 0;
}