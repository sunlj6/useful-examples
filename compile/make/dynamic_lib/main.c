#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "foo.h"



int main(void)
{
    // 如果foo.h头foo_t结构体和libfoo.so变更,
    // 则必须要重新编译main.c,否则即便可正常启动，
    // 数据也未必是正常的.
    // 可通过改变foo_t a、b位置来验证
    foo_t *f = foo_create(1,2);
    if(f == NULL)
        return -1;
    printf("a=%d\n",f->a);
    printf("b=%d\n",f->b);
    foo_destroy(f);
    return 0;
}
