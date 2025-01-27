#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=2;
  int* p=&i;
    int** pp=&p;

  printf("%d",*p);
printf("%d",**pp);
    return 0;
}
