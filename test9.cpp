#include <stdio.h>
int a=2;
void u(void)
{
int a=20;
printf("���뺯��u()ʱ������u()�ľֲ�����a��%d\n",a);
a+=5;
printf("�뿪����u()ʱ������u()�ľֲ�����a��%d\n",a);
}


void v(void)
{ static int a=30;
printf("���뺯��v()ʱ������v()�ľ�̬�ֲ�����a��%d\n",a); a+=5;
printf("�뿪����v()ʱ������v()�ľ�̬�ֲ�����a��%d\n",a);
}


void w(void)
{
printf("���뺯��w()ʱ��ȫ�ֱ���a��%d\n",a); a+=5;
printf("�뿪����w()ʱ��ȫ�ֱ���a��%d\n",a);
}



int main()
{
    int a=4;
    printf("�������У����ֲ�����a��ֵ��%d\n",a); {
    int a=8;
    printf("�������У��ڲ�ֲ�����a��ֵ��%d\n",a);
    }
    printf("��������������ڲ������˳�\n");
    printf("�������У����ֲ�����a��ֵ��%d\n",a);
    u();
    v();
    w();
    u();
    v();
    w();
    printf("�������еľֲ�����a��%d\n",a);
    return 0;
}
