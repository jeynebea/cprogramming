#include <stdio.h>

int main(void){
    int a, b, c;
    int max;
    printf("Print the maximum value of the three.\n");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("The maximum value is %d\n", max);

    return 0;
}