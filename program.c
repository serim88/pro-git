#include <stdio.h>

int sum(int x, int y){
    return (x+y)
}

int fib(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  printf("%d\n",sum(1,2));
  return 0;
}
