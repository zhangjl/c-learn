/**
 * strlen
 */

#include <stdio.h>

unsigned istrlen(const char* str)
{
    unsigned length = 0;
    while(str[length++] != '\0');
    return length - 1;
}

int main(int argc,char* argv[])
{
    printf("str lenth is %u\n",istrlen("this is a function\0"));
}
