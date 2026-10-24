#include<stdio.h>
#include<math.h>
int main () {
    int choice;
    printf("1.Hello world \n");
    printf("2.add two variable \n");
    printf("3.multipule of two variable \n");
    printf("4.Find area of square \n");
    printf("5.find area of circle \n");
    printf("6.find area of cube \n");
    printf("7.find area o cubide\n");
    printf("8.find parametar of circle\n");
    printf("9.celcius to fahrenheit conversion\n");
    printf("10.fahrenheit to celcius conversion\n");
    printf("Enter choice: \n");
    scanf("%d",&choice);
    switch(choice) {
    //case 1..
        case 1: {
            printf("HELLO WORLD \n");
            break;
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
            break;
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
            break;
        }
    //case 4..
        case 4: {
            float x,area;
            printf("Enter side:x \n");
            scanf("%f",&x);
            area=x*x;
            printf("area is:%.2f\n",area);
            break;
        }
    //case 5..
        case 5: {
            float r,area;
            printf("Enter radius:\n");
            scanf("%f",&r);
            area=3.14*(pow(r,2));
            printf("area is:%.2f\n",area);
            break;
        }
    //case 6..
        case 6: {
            float side,area;     
            printf("Enter Side:\n");
            scanf("%f",&side);
            area=pow(side,3);
            printf("area is:%.2f",area);
            break;
        }
    //case 7..
        case 7: {
            float l,b,h,area;
            printf("Enter lemgth:\n");
            scanf("%f",&l);
            printf("Enter width:\n");
            scanf("%f",&b);
            printf("Enter hight:\n");
            scanf("%f",&h);
            area=(l*b*h);
            printf("area is:%.2f",area);
            break;
        }
    //case 8..
        case 8: {
            float r,para;
            printf("Enter radius:\n");
            scanf("%f",&r);
            para=2.0*3.14*r;
            printf("parametar is:%.2f",para);
            break;
        }
    //case 9..
        case 9: {
            float c,f;
            printf("Enter celcius temp:\n");
            scanf("%f",&c);
            f=9.0/5.0*c+32.0;
            printf("fhrenheit is:%.2f",f);
            break;
        }
    //case 10..
        case 10: {
            float c,f;
            printf("Enter fahrenheit temp:\n");
            scanf("%f",&f);
            c=(f-32.0)*5.0/9.0;
            printf("celcius is:%.2f",c);
            break;
        }
    }
    return 0;
}
