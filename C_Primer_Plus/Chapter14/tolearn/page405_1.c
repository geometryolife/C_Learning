/* 使用联合 */
#include <stdio.h>

union hold {
  int digit;
  double bigfl;
  char letter;
};

int main(void) {
  union hold fit;

  fit.digit = 23; // 把23存储在fit，占2字节
  printf("digit: %d\n", fit.digit);
  printf("digit's address:  %p\n", &fit.digit);
  printf("bigfl: %.2f\n", fit.bigfl);
  printf("bigfl's address:  %p\n", &fit.bigfl);
  printf("letter: %c\n", fit.letter);
  printf("letter's address: %p\n", &fit.letter);
  putchar('\n');
  fit.bigfl = 2.0; // 清除23，存储2.0，占8字节
  printf("digit: %d\n", fit.digit);
  printf("digit's address:  %p\n", &fit.digit);
  printf("bigfl: %.2f\n", fit.bigfl);
  printf("bigfl's address:  %p\n", &fit.bigfl);
  printf("letter: %c\n", fit.letter);
  printf("letter's address: %p\n", &fit.letter);
  putchar('\n');
  fit.letter = 'h'; // 清除2.0，存储h，占1字节
  printf("digit: %d\n", fit.digit);
  printf("digit's address:  %p\n", &fit.digit);
  printf("bigfl: %.2f\n", fit.bigfl);
  printf("bigfl's address:  %p\n", &fit.bigfl);
  printf("letter: %c\n", fit.letter);
  printf("letter's address: %p\n", &fit.letter);

  return 0;
};

/*
>>> Execution Result:
digit: 23
digit's address:  0x7ffe83b4b220
bigfl: 0.00
bigfl's address:  0x7ffe83b4b220
letter:
letter's address: 0x7ffe83b4b220

digit: 0
digit's address:  0x7ffe83b4b220
bigfl: 2.00
bigfl's address:  0x7ffe83b4b220
letter:
letter's address: 0x7ffe83b4b220

digit: 104
digit's address:  0x7ffe83b4b220
bigfl: 2.00
bigfl's address:  0x7ffe83b4b220
letter: h
letter's address: 0x7ffe83b4b220
 */
