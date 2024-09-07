#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int minus;

    if(a>=b) {
        minus = a-b;
    } else {
        minus = b-a;
    }

    printf("%d", minus);
    return 0;
}