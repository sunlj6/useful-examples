#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int foo(void)
{
    printf("%s hello world\n",__func__);
    return 0;
}
