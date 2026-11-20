#include <stdio.h>

long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    int n;
    printf("정수를 입력하시오: ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("0부터 20 사이의 정수를 입력하세요.\n");
        return 1;
    }

    printf("%d!은 %ld입니다.\n", n, factorial(n));
    return 0;
}
