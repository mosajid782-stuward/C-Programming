#include<stdio.h>
int main () {
    int choice;
    printf("1.Hello world \n");
    printf("2.add two variable \n");
    printf("3.multipule of two variable \n");
    printf("4.Find area of square \n");
    printf("Enter choice: \n");
    scanf("%d",&choice);
    switch(choice) {
    //case 1..
        case 1: {
            printf("HELLO WORLD \n");
        }
    //case 2..
        case 2: {
            int a,b,sum;
            printf("Enter a:\n ");
            scanf("%d",&a);
            printf("Enter b: \n");
            scanf("%d",&b);
            sum=a+b;
            printf(" sum is :%d\n",sum);
        }
    //case 3...
        case 3: {
            int a,b,product;
            printf("Enter a:\n");
            scanf("%d",&a);
            printf("enter b:\n");
            scanf("%d",&b);
            product=a*b;
            printf("product is:%d\n",product);
        }
    //case 4..
        case 4: {
            float x,area;
            printf("Enter side:x \n");
            scanf("%f",&x);
            area=x*x;
            printf("area is:%.2f\n",area);
        }
    }
    return 0;
}
