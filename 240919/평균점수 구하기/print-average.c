#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8];
    double aver, sum;

    for(int i = 0; i < 8 ; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    aver = sum / 8 ;
    printf("%.1lf", aver);
    return 0;
}