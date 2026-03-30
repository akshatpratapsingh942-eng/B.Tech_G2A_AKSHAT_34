#include <stdio.h>

int main(){
    int n, r, ans = 0, contri = 1;

    printf("Enter the binary number: ");
    scanf("%d", &n);

    while(n > 0){
        r = n % 10;

        if(r == 1){
            ans += contri;
        }

        n = n / 10;
        contri *= 2;
    }

    printf("Decimal = %d", ans);

    return 0;
}