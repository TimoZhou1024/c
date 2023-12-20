#include <stdio.h>
int a=2;
void u(void)
{
int a=20;
printf("进入函数u()时，函数u()的局部变量a是%d\n",a);
a+=5;
printf("离开函数u()时，函数u()的局部变量a是%d\n",a);
}


void v(void)
{ static int a=30;
printf("进入函数v()时，函数v()的静态局部变量a是%d\n",a); a+=5;
printf("离开函数v()时，函数v()的静态局部变量a是%d\n",a);
}


void w(void)
{
printf("进入函数w()时，全局变量a是%d\n",a); a+=5;
printf("离开函数w()时，全局变量a是%d\n",a);
}



int main()
{
    int a=4;
    printf("主函数中，外层局部变量a的值是%d\n",a); {
    int a=8;
    printf("主函数中，内层局部变量a的值是%d\n",a);
    }
    printf("程序从主函数的内层程序块退出\n");
    printf("主函数中，外层局部变量a的值是%d\n",a);
    u();
    v();
    w();
    u();
    v();
    w();
    printf("主函数中的局部变量a是%d\n",a);
    return 0;
}
