#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "foo.h"

int wrap(void)
{
    printf("%s hello world\n",__func__);
    foo_t *foo = foo_create(1,2);
    if(foo != NULL)
    {
        foo_destroy(foo);
    }
    return 0;
}
