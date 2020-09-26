/*
* @Description: 静态库示例
* @Author: sunlj
* @Date: 2020-09-26 23:48:00
* @LastEditTime: 2020-09-26 23:48:00
* @LastEditors: sunlj
* */

#include "foo.h"

foo_t * foo_create(int a,int b)
{
    foo_t *foo = NULL;
    printf("---- %s --- entry -----\n",__func__);
    foo = malloc(sizeof(foo_t));
    if(foo == NULL)
        return NULL;
    memset(foo,0,sizeof(foo_t));

    foo->a = a;
    foo->b = b;
    printf("---- %s --- success -----\n",__func__);
    return foo;
}

int foo_destroy(foo_t *foo)
{
    printf("---- %s --- entry -----\n",__func__);
    if(foo != NULL)
        free(foo);
    printf("---- %s --- success -----\n",__func__);
    return 0;
}
