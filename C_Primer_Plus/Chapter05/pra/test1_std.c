/* 第五章的编程练习1 */
#include <stdio.h>
#define MIN_PER_HOU 60  // 每小时有60分钟
int main(int argc, char *argv[])
{
    /* 定义MIN_PER_HOU常量 */
    /* const int MIN_PER_HOU = 60; */
    int hours, minutes, input;

    printf("CONVERT MINUTES TO HOURS!\n");
    printf("PLEASE ENPUT THE NUMBER OF MINUTES(<=0 TO QUIT): ");
    scanf("%d", &input);
    while (input > 0)
    {
        hours = input / MIN_PER_HOU;
        minutes = input % MIN_PER_HOU;
        printf("CONVERT TO %d HOUR(S) AND %d MINUTES\n", hours, minutes);
        /* 程序设计中也经常使用以下方法计算，从而减少变量hours和minutes的定义和使用 */
        /* printf("CONVERT TO %d HOUR(S) AND %d MINUTES\n", */
        /*        input / MIN_PER_HOU, input % MIN_PER_HOU); */
        printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES(<=0 TO QUIT): ");
        scanf("%d", &input);
    }
    printf("PROGRAM EXIT!\n");

    return 0;
}
