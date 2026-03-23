#include <stdio.h>
int main(){
    float area,circumference,rad;
    printf("enter the radius:");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    circumference=2*3.14*rad;
    printf("the area of circle is %f",area);
    printf("the circumference of circle is %f",circumference);
    return 0;
}