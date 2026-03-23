#include <stdio.h>
int main(){
    float cent,fah;
    printf("enter the temperature in centigrade:");
    scanf("%f",&cent);
    fah=1.8*cent+32;
    printf("the temperature in fahrenheit is %f",fah);
    return 0;
}