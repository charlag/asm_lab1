#include "stdio.h"
signed char a, b, c;
short res, numer, denom;
extern void lab3S(void);

void F_C(void)
{
  numer=a*a-2+c;
  denom = 22/b+c;
  res = numer/denom;
  puts("C: ");
  printf("\tnumerator: %hi\n", numer);
  printf("\tdenom: %hi\n", denom);
  printf("\tresult: %hi\n", res);
}

void F_ASM(void)
{
  res = 0;
  numer = 0;
  denom = 0;
  puts("ASM: ");
  lab3S();
  printf("\tnumerator: %hi\n", numer);
  printf("\tdenom: %hi\n", denom);
  printf("\tresult: %hi\n", res);
}

int main(void)
{
  puts("Input a");
  scanf("%hhd", &a);
  puts("Input b");
  scanf("%hhd", &b);
  puts("Input c");
  scanf("%hhd", &c);
  F_C();
  F_ASM();
  return 0;
}
