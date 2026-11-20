#include <stdio.h>

int x;
void sub(void);

int main(void)
{
    for (x = 0; x < 10; x++) {
        sub();
    }
    return 0;
}

void sub(void)
{
    for (x = 0; x < 10; x++) {
        printf("*");
    }
}
