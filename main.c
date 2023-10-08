#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("enter the calculation : ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("오류: 나누는 수가 0입니다.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("오류: 잘못된 연산자입니다.\n");
            return 1;
    }

    printf("= %d\n", result);

    return 0;
}
