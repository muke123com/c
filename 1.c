#include <stdio.h>
#include <float.h>
 
int main()
{
   printf("123\n");
   printf("int存储大小：%lu\n", sizeof(int));
   printf("float存储大小：%lu\n", sizeof(float));
   printf("float 最小值： %E\n", FLT_MIN );
   printf("float 最大值：%E\n", FLT_MAX);
   printf("long存储大小：%lu\n", sizeof(long));
   return 0;
}