#include <stdio.h>

int main() {
    int h, m;
    scanf("%d:%d",&h,&m);

    h = (h+1) % 24;
    printf("%d:%d",h,m);
    return 0;
}