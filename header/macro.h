/**
 * Macro
 * @author: zhangjl
 * @date: 2015-01-02
 */
#include <stdio.h>

#define PI 3.141592653
#define HELLO_WORLD "hello world"
#define MAX(A,B) (A) > (B) ? (A) : (B)
#define RANGE(R) PI * (R) * (R)

#define dprint(expr) printf(#expr " = %g\n",expr)
#define paste(front,back) front ## back

#define SWAP(t,x,y) {\
    t tmp = x;\
    x = y;\
    y = tmp;\
}

