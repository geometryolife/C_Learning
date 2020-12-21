/* 假设用一个结构表示一辆汽车。如果汽车属于驾驶者，就要用一个结构来描述这个 */
/* 所有者。如果汽车被租赁，那么需要一个成员来描述其租赁公司。 */
#include <stdio.h>

struct owner {
  char socsecurity[12];
};

struct leasecompany {
  char name[40];
  char headquarters[40];
};

union data {
  struct owner owncar;
  struct leasecompany leasecar;
};

struct car_data {
  char make[15];
  int status; // 私有为0，租赁为1
  union data ownerinfo;
};

int main(void) {
  struct leasecompany lc = {"H car", "Shanghai"};
  struct car_data BM1 = {"宝马", 0, "宝马一系"};
  struct car_data BM3 = {"宝马", 1, "宝马三系"};

  return 0;
}
