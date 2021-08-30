/* list.c -- 支持链表操作的函数 */
#include "e3_list.h"
#include <stdio.h>
#include <stdlib.h>

/* 局部函数原型 */
static void CopyToNode(Item item, Node *pnode);

/* 接口函数 */
/* 把链表设置为空 */
void InitializeList(List *plist) { plist = NULL; }

/* 如果链表为空，返回 true */
bool ListIsEmpty(const List *plist) {
  if (*plist == NULL)
    return true;
  else
    return false;
}

/* 如果链表已满，返回 true */
bool ListIsFull(const List *list) {
  Node *pt;
  bool full;

  pt = (Node *)malloc(sizeof(Node));
  if (pt == NULL)
    full = true;
  else
    full = false;
  free(pt);

  return full;
}

/* 返回节点的数量 */
unsigned int ListItemCount(const List *plist) {
  unsigned int count = 0;
  Node *pnode = *plist; // 设置链表的开始

  while (pnode != NULL) {
    ++count;
    pnode = pnode->next; // 设置下一个节点
  }

  return count;
}

/* 创建存储项的节点，并将其添加至 plist 指向的链表末尾(较慢的实现) */
bool AddItem(Item item, List *plist) {
  Node *pnew;
  Node *scan = *plist;

  pnew = (Node *)malloc(sizeof(Node));
  if (pnew == NULL)
    return false; // 失败时退出函数

  CopyToNode(item, pnew);
  pnew->next = NULL;
  if (scan == NULL) // 空链表，所以把
    *plist = pnew;  // pnew 放在链表的开头
  else {
    while (scan->next != NULL)
      scan = scan->next; // 找到链表的末尾
    scan->next = pnew;   // 把 pnew 添加到链表的末尾
  }

  return true;
}

/* 访问每个节点并执行 pfun 指向的函数 */
void Traverse(const List *plist, void (*pfun)(Item item)) {
  Node *pnode = *plist; // 设置链表的开始

  while (pnode != NULL) {
    (*pfun)(pnode->item); // 把函数应用于链表中的项
    pnode = pnode->next;  // 前进到下一项
  }
}

/* 释放由 malloc() 分配的内存 */
/* 设置链表指针为 NULL */
void EmptyTheList(List *plist) {
  Node *psave;

  while (*plist != NULL) {
    psave = (*plist)->next; // 保存下一个节点的地址
    free(*plist);           // 释放当前节点
    *plist = psave;         // 前进至下一个节点
  }
}

/* 局部函数定义 */
/* 把一个项拷贝到节点中 */
static void CopyToNode(Item item, Node *pnode) {
  pnode->item = item; // 拷贝结构
}
