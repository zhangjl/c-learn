/**
 * 逆波兰式
 * @author: zhangjl
 * @date: 2015-01-01
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

int main(int argc,char* argv[])
{
    const char* str = "12-45+/5*\0";
    double op2 = 0;
    for(int i = 0,length = strlen(str);i < length;i++)
    {
        switch(str[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                push(str[i] - '0');
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                op2 = pop();
                push(pop() / op2);
                break;
        }
    }
    printf("the result is %lf\n",pop());
    return 0;
}
