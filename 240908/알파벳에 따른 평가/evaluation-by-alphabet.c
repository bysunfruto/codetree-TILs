#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char eng;
    scanf("%c", &eng);

    if (eng == 'S') {
        printf("Superior");
    } else if (eng == 'A') {
        printf("Excellent");
    } else if (eng == 'B') {
        printf("Good");
    } else if (eng == 'C') {
        printf("Usually");
    } else if (eng == 'D') {
        printf("Effort");
    } else {
        printf("Failure");
    }
    return 0;
}