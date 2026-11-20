#include <stdio.h>

void print_binary(unsigned int x)
{
    if (x > 1) {
        print_binary(x / 2);
    }
    printf("%u", x % 2);
}

int main(void)
{
    print_binary(9);
    printf("\n");
    return 0;
}
