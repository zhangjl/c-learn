/**
 * data bound
 */
#include <stdio.h>

int main(int argc,char* argv[])
{
    char c = 1;
    unsigned char c2 = 1;

    short si = 1;
    unsigned short si2 = 1;

    int i = 1;
    unsigned int i2 = 1;

    long l = 1L;
    unsigned long l2 = 1L;

    while(c >= 0)
    {
        c <<= 1;
        c2 <<= 1;
    }

    while(si >= 0)
    {
        si <<= 1;
        si2 <<= 1;
    }

    while(i >= 0)
    {
        i <<= 1;
        i2 <<= 1;
    }

    while(l >= 0)
    {
        l <<= 1;
        l2 <<= 1;
    }
    printf("char: Max: %u, Min: %d\n",c2,c);
    printf("short: Max: %u, Min: %d\n",si2,si);
    printf("int: Max: %u, Min: %d\n",i2,i);
    printf("long: Max: %lu, Min: %ld\n",l2,l);
}
