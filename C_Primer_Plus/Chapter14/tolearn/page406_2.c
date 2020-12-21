#include <stdio.h>

union hold {
  int digit;
  double bigfl;
  char letter;
};

int main(void) {
  union hold valA;
  union hold *pu;

  valA.letter = 'R';
  pu = &valA;
  printf("%c ASCII: %d\n", pu->letter, valA.letter);
  union hold valB = valA; // 用另一个联合来初始化
  printf("%c ASCII: %d\n", valB.letter, valA.letter);
  union hold valC = {88}; // 初始化联合的digit成员
  printf("valC: %d\n", valC.digit);
  union hold valD = {.bigfl = 118.2}; // 指定初始化器
  printf("valD: %.2f\n", valD.bigfl);

  return 0;
}

/*
>>> Execution Result:
R ASCII: 82
R ASCII: 82
valC: 88
valD: 118.20
 */
