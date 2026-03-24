# include <stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number is an even number %d",num);
    }
    else
    {
        printf("the number is an odd number %d",num);
    }
    return 0;
}