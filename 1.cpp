#include <stdio.h>
#include <float.h>
// 常量
const int LENGTH = 10;
const int WIDTH = 5;
// 函数声明
void func1(void);
static int count = 10;

double balance[5] = {1, 2.0};
enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    printf("123\n");
    printf("int存储大小：%lu\n", sizeof(int));
    printf("float存储大小：%lu\n", sizeof(float));
    printf("float 最小值： %E\n", FLT_MIN);
    printf("float 最大值：%E\n", FLT_MAX);
    printf("long存储大小：%lu\n", sizeof(long));

    int area;
    area = LENGTH * WIDTH;
    printf("%d\n", area);

    enum DAY day;
    day = WED;
    printf("%d\n", day);

    int *ptr = NULL;
    printf("area 变量的地址 %p\n", &area);
    printf("day 变量的地址 %p\n", &day);
    printf("ptr 变量的地址 %p\n", ptr);

    return 0;
}