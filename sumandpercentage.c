#include <stdio.h>
int main(){
    float a,b,c,d,e,sum=0,per,tot;
    printf("enter the marks of five subjects: \n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("enter total marks");
    scanf("%f",&tot);
    sum=sum+a+b+c+d+e;
    per=(sum/tot)*100;
    printf("the sum of marks are %f",sum);
    printf("the percentage of marks is %f",per);
    return 0;
}