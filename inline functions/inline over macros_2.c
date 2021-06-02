#include<stdio.h>
#define cube(b)     b*b*b   // 1+2 * 1+2 * 1+2 --> 1 + 2 + 2 + 2 --> 7
inline int cube(int a) { return a*a*a; }
int main()
{
     printf("%d", cube(1+2));
     return 0;
}
