#include <stdio.h>

int main() {
    int num;

    printf("정수 하나를 입력하시오: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("절대값은 %d입니다.\n", num);
    } else {
        num = -num;
        printf("절대값은 %d입니다.\n", num);
    }

    return 0;
}
