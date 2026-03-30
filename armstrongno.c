#include <stdio.h>
#include <math.h>
int main(){
    int num,originalnum,num1,rem,n,res;
    printf("armstrong numbers between 1 to 100 are:");
    for(num=1;num<=100;num++){
        originalnum=num;
        n=0;
        res=0;
        num1=num;
        while(num1!=0){
            num1/=10;
            n++;
        }
        num1=num;
        while(num1!=0){
            rem=num1%10;
            res+=pow(rem,n);
            num1/=10;
        }
        if(res==originalnum){
            printf("%d",originalnum);
        }
    }
    return 0;
}