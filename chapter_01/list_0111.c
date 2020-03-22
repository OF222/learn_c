/*
scanf使用例
*/

#include <stdio.h>

int main(void)
{
   int n;

   printf("数値(整数)をご入力ください。");
   scanf("%d", &n);

   printf("貴方の今日のラッキーナンバーは%dです！\n", n);

   return 0;
}
