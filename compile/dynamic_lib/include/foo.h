/*
* @Description: 动态库示例
* @Author: sunlj
* @Date: 2020-09-26 23:48:00
* @LastEditTime: 2020-09-26 23:48:00
* @LastEditors: sunlj
* */

#ifndef __FOO_H__
#define __FOO_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int a;
    int b;
}foo_t;

foo_t * foo_create(int a,int b);
int foo_destroy(foo_t *foo);

#ifdef __cplusplus
}
#endif

#endif
