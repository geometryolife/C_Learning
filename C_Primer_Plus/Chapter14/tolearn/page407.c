/* 假设用一个结构表示一辆汽车。如果汽车属于驾驶者，就要用一个结构来描述这个
所有者。如果汽车被租赁，那么需要一个成员来描述其租赁公司。
使用匿名联合来实现 */
#include <stdio.h>

struct owner {
  char socsecurity[12];
};

struct leasecompany {
  char name[40];
  char headquarters[40];
};

struct car_data {
  char make[15];
  int status; // 私有为0，租赁为1
  union {
    struct owner owncar;
    struct leasecompany leasecar;
  };
};

int main(void) {
  struct car_data flits0 = {"特斯拉", 0, "BKSE"};
  struct car_data flits1 = {"迈凯轮", 1, "租租乐"};

  printf("%s\n", flits0.owncar.socsecurity);
  printf("%s\n", flits1.leasecar.headquarters);

  return 0;
}
