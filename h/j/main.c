#include <stdio.h>

void PrintResult(int res)
{
printf("Result: %d\n", res);
}

int main()
{
int a = 8;
int b = 3;
int c;
if(a > b)
c = a - b;
else
c = b - a;
printf("Result: %d\n", c);
return 0;
}
