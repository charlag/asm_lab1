#include "stdio.h"
unsigned char aaaS, bbbS, cccS;
short res, numerator, denominator;
extern void lab3S(void);

void F_C(void)
{
  numerator=aaaS*aaaS-2+cccS;
  denominator = 22/bbbS+cccS;
  res = numerator/denominator;
  puts("C: ");
  printf("\tnumerator: %d\n", numerator);
  printf("\tdenominator: %d\n", denominator);
  printf("\tresult: %d\n", res);
}

void F_ASM(void)
{
  res, numerator, denominator = 0;
  puts("ASM: ");
  lab3S();
  printf("\tnumerator: %d\n", numerator);
  printf("\tdenominator: %d\n", denominator);
  printf("\tresult: %d\n", res);
}

int main(void)
{
  puts("Input aaaS");
  scanf("%hhu", &aaaS);
  puts("Input bbbS");
  scanf("%hhu", &bbbS);
  puts("Input cccS");
  scanf("%hhu", &cccS);
  F_C();
  F_ASM();
}
