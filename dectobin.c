#include <stdio.h>

int main(){
    int n, r;
    long long ans = 0, contri = 1;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while(n > 0){
        r = n % 2;

        if(r == 1){
            ans += contri;
        }

        n = n / 2;        
        contri *= 10;     
    }

    printf("Binary = %lld", ans);

    return 0;
}