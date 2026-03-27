#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0, b=1, c, i, n;

    printf("Enter the terms: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Series is not possible");
        exit(0);
    }

    if(n == 1)
    {
        printf("Series = %d", a);
    }
    else
    {
        printf("Series = %d \t %d", a, b);

        for(i = 1; i <= n; i++)
        {
            c = a + b;
            printf("\t %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}