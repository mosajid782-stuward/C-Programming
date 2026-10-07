#include<stdio.h>

int main () {
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a==b&&b==c) {
        printf("Al are Equal");
    }else if(a<=b && a<=c) {
        printf("a is Smallest");
    }
    else if(b<=a && b<=c) {
        printf("b Is Smallest");
    }
    else {
        printf("c Is Smallest");
    }
    return 0;
}
