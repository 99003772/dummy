#include"mystring.h"

int slen(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}