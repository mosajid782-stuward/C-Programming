/*
this is a source code of P1 to P9 ....
*/
#include<stdio.h>
int main () {
    int codefile;
    printf("1.P1.c \n");
    printf("2.P2.c \n");
    printf("3.P3.c \n");
    printf("4.P4.c \n");
    printf("5.P5.c \n");
    printf("6.P6.c \n");
    printf("7.P7.c \n");
    printf("8.P8.c \n");
    printf("9.P9.c \n");
    printf("Enter codefile: \n");
    scanf("%d",&codefile);
    switch(codefile) {
    //codefile 1..
        case 1: {
            int a,b,sum;
            printf("Enter a:");
            scanf("%d",&a);
            printf("Enter b:");
            scanf("%d",&b);
            printf("sum is :%d",a+b);
            break;
        }
    //codefile 2..
        case 2: {
            float r;
            printf("Enter radius:");
            scanf("%f",&r);
            printf("Area of Circle:%.2f",(3.14*r*r));
            break;
        }
    //codefile 3..
        case 3: {
            int x;
            printf("Enter number x:");
            scanf("%d",&x);
            printf("%d \n",(x%2)==0);
            break;
        }

    }

    return 0;
}