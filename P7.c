#include<stdio.h>

int main () {
    int num,temp,digit,sum=0,n=0;
    printf("Enter Number:");
    scanf("%d",&num);

    temp=num;
    while(temp>0) {
        n++;
        temp=temp/10;
    }
    temp=num;
    while(temp>0) {
        digit=temp%10;
        int power=1;
        for(int i=0;i<n;i++) {
            power=power*digit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum== num) {
        printf("Armstrong number");
    }
    else {
        printf("not a Armstrong number");
    }
    return 0;
}