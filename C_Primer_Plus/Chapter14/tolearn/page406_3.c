/* 假设用一个结构表示一辆汽车。如果汽车属于驾驶者，就要用一个结构来描述这个
所有者。如果汽车被租赁，那么需要一个成员来描述其租赁公司。 */
#include <stdio.h>

struct owner {
  char socsecurity[40];
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
  /* struct car_data ow = {"特斯拉", 0, "伯克希尔哈撒韦"}; */
  /* struct car_data le = {"迈凯伦", 1, {"自驾租租乐", "纽约"}}; */

  return 0;
}
