#include <stdio.h>
int main(){
    int n,sumeven=0,sumodd=0,i;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+i;
        }
        else
        {
        sumodd=sumodd+i;
    }
}
    printf("the sum of even numbers is %d",sumeven);
    printf("the sum of odd numbers is %d",sumodd);

return 0;
}