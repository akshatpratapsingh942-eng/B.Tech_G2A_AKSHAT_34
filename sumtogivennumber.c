#include <stdio.h>
int main(){
    int a,sum=0,i,res;
    printf("enter the amount of numbers to be added \n");
    scanf("%d",&a);
    printf("enter the numbers to be added");
    for(i=1;i<=a;i++)
    {
        scanf("%d",&res);
        sum=sum+res;
    }
    printf("the sum given numbers are %d",sum);
    return 0;
}