#include <stdio.h>

int main(void)
{
    auto int sum = 0;
    int i = 0;

    for (i = 1; i <= 5; i++) {
        sum += i;
    }

    printf("sum = %d\n", sum);
    return 0;
}
