#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...)
{
    int answer = 0;
    va_list argptr;

    va_start(argptr, num);
    while (num > 0) {
        answer += va_arg(argptr, int);
        num--;
    }
    va_end(argptr);

    return answer;
}

int main(void)
{
    int answer = sum(4, 4, 3, 2, 1);
    printf("합은 %d입니다.\n", answer);
    return 0;
}
