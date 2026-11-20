#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);
extern int MOD;

int main(void)
{
    int i;

    MOD = 32767;
    for (i = 0; i < 10; i++) {
        printf("%u ", random_i() % 101);
    }
    printf("\n");

    printf("실수 난수: %.4f\n", random_f());
    return 0;
}
