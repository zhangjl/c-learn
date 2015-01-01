/*
 * =====================================================================================
 *
 *       Filename:  char_input_output.c
 *
 *    Description:  char input / output
 *                  copy file ./char_input_output < input_file > output_file
 *
 *        Version:  1.0
 *        Created:  2014年11月20日 00时21分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz mehner (fgm), mehner.fritz@fh-swf.de
 *   Organization:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc,char* argv[])
{
    int c = 0;
    while((c = getchar()) != EOF)
    {
        putchar(c);
    }
    return 0;
}

