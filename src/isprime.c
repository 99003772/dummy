#include"myutils.h"

int check_prime(int a)
{
    int c;
    for ( c = 2; c <= a; c++)
    {
       if(a%c == 0)
       return 0;
    }
    return 1;
}