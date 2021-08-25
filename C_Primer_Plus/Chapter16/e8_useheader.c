/* useheader.c -- 使用 names_st 结构 */
#include "e6_names_st.h"
#include <stdio.h>
// 记住要链接 names_st.c

int main(void) {
  names candidate;

  get_names(&candidate);
  printf("Let's welcome ");
  show_names(&candidate);
  printf(" to this program!\n");

  return 0;
}

/*
>>> Execution Result:
Please enter your first name: Joe
Please enter your last name: Chen
Let's welcome Joe Chen to this program!
 */
