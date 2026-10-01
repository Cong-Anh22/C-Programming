#include <stdio.h>
int main(void) {
    int x,y;
    printf("Type first integer:");
    scanf("%d", &x);
    printf("Type second integer:");
    scanf("%d", &y);

    printf("Sum = %d\n", x+y);
    printf("Difference = %d\n", x-y);
    printf("Product = %d\n", x*y);
    if (y != 0) {
        printf("Quotient = %.2f\n", (double)x/(double)y);
        printf("Remainder = %d\n", x%y);
    } else {
        printf("Can't divide by 0.\n");
    }
    return 0;
}