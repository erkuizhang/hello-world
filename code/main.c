/**
* @file main.c
* @brief �ļ�����˵��
*
* ��ϸ˵��...
*
* @author erkuizhang
*/

#include <stdio.h>
#include "main.h"

int Function1(int a,int b);

int main(int argc,char *argv[])
{
	STRUCT_T t_struct = {0};

	t_struct.member1 = 3;
	t_struct.member2 = 7;
	printf("add result:%d\n",Function1(t_struct.member1,t_struct.member2));

    return 0;
}

/**
* Function1�ļ�˵��...
* Function1����ϸ˵��..
* @param a ������ӵĲ���
* @param b ������ӵĲ���
* @return ��������������ӵĽ��
*/
int Function1(int a,int b)
{
    return (a+b);
}