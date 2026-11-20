#include <stdio.h>

/* 실제 하드웨어 포트 대신 volatile 변수로 사용 예시를 보여준다. */
volatile int io_port;

void wait_for_port(void)
{
    io_port = 0;
    while (io_port != 255) {
        /* 하드웨어가 값을 바꾼다고 가정하는 대기 부분 */
        break; /* 일반 PC에서 무한 반복하지 않도록 둔 예시용 처리 */
    }
}

int main(void)
{
    io_port = 255;
    wait_for_port();
    printf("io_port = %d\n", io_port);
    return 0;
}
