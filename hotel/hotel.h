#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "********************"
#include<stdio.h>
int menu(void); // 显示菜单
int getnights(void); //获取天数
void showprice(double rate, int nights);