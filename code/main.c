/**
* @file main.c
* @brief 文件简明说明
*
* 详细说明...
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
* Function1的简单说明...
* Function1的详细说明..
* @param a 用来相加的参数
* @param b 用来相加的参数
* @return 传回两个参数相加的结果
*/
int Function1(int a,int b)
{
    return (a+b);
}