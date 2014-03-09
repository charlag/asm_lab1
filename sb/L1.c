#include "stdio.h"
signed char aaaS, bbbS, cccS;
short res, numerator, denominator;
extern void lab3S(void);

void F_C(void)
{
  numerator=aaaS*aaaS-2+cccS;
  denominator = 22/bbbS+cccS;
  res = numerator/denominator;
  puts("C: ");
  printf("\tnumerator: %hi\n", numerator);
  printf("\tdenominator: %hi\n", denominator);
  printf("\tresult: %hi\n", res);
}

void F_ASM(void)
{
  res = 0;
  numerator = 0;
  denominator = 0;
  puts("ASM: ");
  lab3S();
  printf("\tnumerator: %hi\n", numerator);
  printf("\tdenominator: %hi\n", denominator);
  printf("\tresult: %hi\n", res);
}

int main(void)
{
  puts("Input aaaS");
  scanf("%hhd", &aaaS);
  puts("Input bbbS");
  scanf("%hhd", &bbbS);
  puts("Input cccS");
  scanf("%hhd", &cccS);
  printf("a: %hhd, b: %hhd, c: %hhd\n", aaaS, bbbS, cccS);
  F_C();
  F_ASM();
  return 0;
}
