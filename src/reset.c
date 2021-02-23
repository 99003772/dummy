#include "bitmask.h"

int reset(int n, int b)
{
    return(n & (~(1 << b)));
}