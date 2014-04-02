#include "stdio.h"
unsigned char a, b, c;
short res, numer, denom;
extern void lab3S(void);

void F_C(void)
{
  numer=a*a-2+c;
  denom = 22/b+c;
  res = numer/denom;
  puts("C: ");
  printf("\tnumerator: %d\n", numer);
  printf("\tdenom: %d\n", denom);
  printf("\tresult: %d\n", res);
}

void F_ASM(void)
{
  res = 0;
  numer = 0;
  denom = 0;
  puts("ASM: ");
  lab3S();
  printf("\tnumerator: %d\n", numer);
  printf("\tdenom: %d\n", denom);
  printf("\tresult: %d\n", res);
}

int main(void)
{
  puts("Input a");
  scanf("%hhu", &a);
  puts("Input b");
  scanf("%hhu", &b);
  puts("Input c");
  scanf("%hhu", &c);
  F_C();
  F_ASM();
  return 0;
}
