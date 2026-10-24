/*
   This shows what i read in last 4 days.........
*/
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
    printf("11.program to check number is even or odd\n");
    printf("12.some physics formula\n");
    printf("13.find avg. no. of 3 number\n");
    printf("14.program to check char is digit or not\n");
    printf("15.find smallest number in two numbers\n");
    printf("16.find smallest no. in 3 number \n");
    printf("17.find largest no. in 2 number \n");
    printf("18.find largest no. in 3 number \n");
    printf("19.print MCQ's \n");
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
    //case 11..
        case 11: {
            int num;
            printf("Enter number:\n");
            scanf("%d",&num);
            if(num%2==0) {
                printf("number is even \n");
            } else {
                printf("number is odd \n");
            }
            break;
        }
    //case 12..
        case 12: {
            int choice;
            printf("1.force calculate \n");
            printf("2.kinetic energy calculate \n");
            printf("3.momentum calculate \n");
            printf("Enter choice\n");
            switch(choice) {
                case 1: {
                    float m,a,F;
                    printf("Enter mass:\n");
                    scanf("%f",&m);
                    printf("Enyter acceleration:\n");
                    scanf("%f",&a);
                    F=m*a;
                    printf("force is:%.2f",F);
                    break;
                }
                case 2: {
                    float m,v,K;
                    printf("Enter mass:\n");
                    scanf("%f",&m);
                    printf("Enter velocity:\n");
                    scanf("%f",&v);
                    K=1.0/2.0*m*(pow(v,2));
                    printf("K.E is:%.2f",K);
                    break;
                }
                case 3: {
                    float m,v,P;
                    printf("Enter mass:\n");
                    scanf("%f",&m);
                    printf("Enter velocity:\n");
                    scanf("%f",&v);
                    P=m*v;
                    printf("Momentumis:%.2f",P);
                    break;
                }
            }
            break;
        }
    //case 13..
        case 13: {
            float x,y,z,Avg;
            printf("Enter x:\n");
            scanf("%f",&x);
            printf("Enter y:\n");
            scanf("%f",&y);
            printf("Enter z:\n");
            scanf("%f",&z);
            Avg=(x+y+z)/3.0;
            printf("Average is:%.2f",Avg);
            break;
        }
    //case 14..
        case 14:{
            char ch;
            printf("Enter character:\n");
            scanf("%c",&ch);
            if( ch== 0 && ch>=9) {
                printf(" it is digit \n");
            }
            else {
                printf("it is not digit");
            }
            break;
        }
    //case 15..
        case 15: {
            int a,b;
            printf("Enter a:\n");
            scanf("%d",&a);
            printf("Enter b:\n");
            scanf("%d",&b);
            if(a>b) {
                printf("b is small \n");
            }
            else if(b>a) {
                printf("a is small \n");
            }
            else {
                printf(" Both are equal \n");
            }
            break;
        }
    //case 16..
        case 16: {
            int a, b, c;
            printf("Enter a:\n");
            scanf("%d",&a);
            printf("Enter b:\n");
            scanf("%d",&b);
            printf("Enter c:\n");
            scanf("%d",&c);
            if(a==b && a==c) {
                printf("All are equal \n");
            }
            else if(a<b && a<c) {
                printf("a is small \n");
            }
            else if(b<a && b<c) {
                printf("b is small \n");
            }
            else {
                printf("c is small \n");
            }
            break;
        }
    //case 17..
        case 17: {
            int a,b;
            printf("Enter a:\n");
            scanf("%d",&a);
            printf("Enter b:\n");
            scanf("%d",&b);
            if( a>b) {
                printf("a is big \n");
            }
            else if(b>a) {
                printf("b is big \n");
            }
            else {
                printf("Both are equal \n");
            }
            break;
        }
    //case 18..
        case 18: {
            int a,b,c;
            printf("Enter a:\n");
            scanf("%d",&a);
            printf("Enter b:\n");
            scanf("%d",&b);
            printf("Enter c:\n");
            scanf("%d",&c);
            if(a==b && b==c) {
                printf("all are equal \n");
            }
            else if(a>b && a>c) {
                printf(" a is big \n");
            }
            else if(b>a && b>c) {
                printf("b is big \n");
            }
            else {
                printf("c is big \n");
            }
            break;
        }
    //case 19..
        case 19: {
            int choice;
            printf("Question: WHAT IS THE CAPITAL OF INDIA? \n");
            printf("1.Kolkata \n");
            printf("2.Lucknow \n");
            printf("3.New Delhi \n");
            printf("4. Pune \n");
            printf("choice :\n");
            scanf("%d",&choice);
            if(choice == 3) {
                printf(" Correct Answer \n");
            }
            else {
                printf("Wrong Answer \n");
            }
            break;
        }

    }
    return 0;
}
