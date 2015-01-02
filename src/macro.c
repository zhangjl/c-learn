/**
 * Macro source file
 * @author: zhangjl
 * @date: 2014-01-02
 */

#include <stdio.h>
#include <macro.h>

int main(int argc,char* argv[])
{
    printf("PI = %.9lf\n",PI);
    printf("%s\n",HELLO_WORLD);
    printf("MAX(1,2) = %d\n",MAX(1,2));
    printf("RANGE(1 + 2) = %.9lf\n",RANGE(1 + 2));

    dprint(3 / 2.0);

    double paste(name,1) = 3.0;
    dprint(paste(name,1));

    int x = 1;
    int y = 2;
    SWAP(int,x,y);
    return 0;
}
