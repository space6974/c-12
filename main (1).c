#include <stdio.h>

/* static 함수 f1은 다른 소스 파일에서 호출할 수 없다. */
extern void f2(void);

int main(void)
{
    f2();
    return 0;
}
