/**
 * stack source file
 * @author: zhangjl
 * @date: 2014-01-01
 */
#include <stdio.h>
#include "common.h"
#include "stack.h"

static double stack[LIMIT];
static unsigned sp = 0;

int push(double data)
{
    int error = 0;

    do{
        if(sp >= LIMIT - 1)
        {
            error = 1;
            break;
        }
        stack[sp++] = data;
    }while(0);

    return error;
}

double pop(void)
{
    double data = 0;

    do{
        if(0 == sp)
        {
            break;
        }
        data = stack[--sp];
    }while(0);

    return data;
}
