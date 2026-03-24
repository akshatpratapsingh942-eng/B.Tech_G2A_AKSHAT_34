#include <stdio.h>
int main(){
    float a,b,c,d,e,sum=0,per,tot;
    printf("enter the marks of five subjects:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("enter the total marks:");
    scanf("%f",&tot);
    sum=sum+a+b+c+d+e;
    per=(sum/tot)*100;
    if(per>90 && per<=100)
    {
        printf("the grade is A");
    }
    else if(per>80 && per<=90)
    {
        printf("the grade is B");
    }
    else if(per>60 && per<=80)
    {
        printf("the grade is C");
    }
    else
    {
        printf("the grade is D");
    }
    return 0;
}