/*
 * =====================================================================================
 *
 *       Filename:  power.c
 *
 *    Description:  power
 *
 *        Version:  1.0
 *        Created:  2014年11月21日 02时03分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz mehner (fgm), mehner.fritz@fh-swf.de
 *   Organization:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "power.h"
double power(double base,int n)
{
    double p = 1.0;
    for(int i = 0;i < n;i++)
    {
        p *= base;
    }
    return p;
}
