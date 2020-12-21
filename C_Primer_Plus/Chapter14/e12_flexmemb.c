/* flexmemb.c -- 伸缩型数组成员(C99新增特性) */
#include <stdio.h>
#include <stdlib.h>

struct flex {
  size_t count;
  double average;
  double scores[]; // 伸缩型数组成员
};

void showFlex(const struct flex *p);

int main(void) {
  struct flex *pf1, *pf2;
  int n = 5;
  int i;
  int tot = 0;

  // 为结构和数组分配存储空间
  pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
  pf1->count = n;
  for (i = 0; i < n; i++) {
    pf1->scores[i] = 20.0 - i;
    tot += pf1->scores[i];
  }
  pf1->average = tot / n;
  showFlex(pf1);

  n = 9;
  tot = 0;

  pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
  pf2->count = n;
  for (i = 0; i < n; i++) {
    pf2->scores[i] = 20.0 - i / 2.0;
    tot += pf2->scores[i];
  }
  pf2->average = tot / n;
  showFlex(pf2);
  free(pf1);
  free(pf2);

  return 0;
}

void showFlex(const struct flex *p) {
  int i;

  printf("Scores : ");
  for (i = 0; i < p->count; i++)
    printf("%g ", p->scores[i]);
  printf("\nAverage: %g\n", p->average);
}

/*
>>> Execution Result:
Scores : 20 19 18 17 16
Average: 18
Scores : 20 19.5 19 18.5 18 17.5 17 16.5 16
Average: 17
 */
