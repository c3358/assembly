// 013_无符号数条件转移指令JNB JAE JNC(大于等于).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("begin\n");
	int a = 3, b = -5;
	unsigned int a2 = a, b2 = b;
	if (a2<b2)//无符号的生成JAE JNB	 不够减借位
		if (a<b) ///<时不跳转>时跳转带符号的生成JGE JNL指令
		{
		printf("do if\n");
		}

	return 0;
}

