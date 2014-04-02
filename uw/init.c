#include "stdio.h"
unsigned short a, b, c; 
int res, numer, denom;
extern void lab3S(void);

void F_C(void)
{
  numer=a*a-2+c;
  denom = 22/b+c;
  res = numer/denom;
  puts("C: ");
  printf("\tnumerator: %d\n", numer);
  printf("\tdenominator: %d\n", denom);
  printf("\tresult: %d\n", res);
}

void F_ASM(void)
{
  res = 0;
  numer = 0;
  denom = 0;
  lab3S();
  puts("ASM: ");
  printf("\tnumerator: %d\n", numer);
  printf("\tdenominator: %d\n", denom);
  printf("\tresult: %d\n", res);
}

int main(void)
{
  puts("Input a");
  scanf("%hu", &a);
  puts("Input b");
  scanf("%hu", &b);
  puts("Input c");
  scanf("%hu", &c);
  F_C();
  F_ASM();
  return 0;
}
