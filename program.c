#include <stdio.h>

>>>>>>> eff8b8a12be71dbd01e8c925983c53e637485cb7
int fib(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

<<<<<<< HEAD
=======
int sum(int x, int y){
    return (x+y);
}

>>>>>>> eff8b8a12be71dbd01e8c925983c53e637485cb7
int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  printf("%d\n",sum(1,2));
  return 0;
}
