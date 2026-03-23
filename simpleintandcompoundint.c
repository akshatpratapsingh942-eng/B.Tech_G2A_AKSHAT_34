#include <stdio.h>
int main(){
    float p,r,t,si,ci,amt;
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
    printf("Enter amount:");
    scanf("%f",&amt);
    si=(p*r*t)/100;
    ci=amt-p;
    printf("the simple interest is %f",si);
    printf("the compound interest is %f",ci);
    return 0;
}