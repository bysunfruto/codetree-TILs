#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a>b ? b : a ;
    min = min < c ? min : c ;

    if ( a == min) {
        printf("1 ");
    } else {
        printf("0 ");
    }

    if ( a == b && b == c) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}