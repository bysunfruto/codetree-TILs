#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int sum = 0, cnt = 0;
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 250) {
            break;
        }
        sum += arr[i];
        cnt++;

    }

    double aver = (double) sum / cnt ;
    printf("%d %.1lf", sum, aver);

    
    return 0;
}