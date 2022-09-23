#include <stdio.h>
#include <limits.h>

int main()
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;
    int num6 = 22;

    printf("%d %d %d %ld %ld  %lld %d\n", num1, num2, num3, num4, LONG_MAX, num5, num6);
    
    return 0;
}
