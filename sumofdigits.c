#include <stdio.h>
int main(){
    float num,a,sum=0;
    printf("enter a number:");
    scanf("%f",&num):
    while(num!=0)
    (
        a=num%10;
        sum=sum+a;
        num=num/10;
    )
    printf("the sum of digits of a number is %f",sum);
    return 0;
}