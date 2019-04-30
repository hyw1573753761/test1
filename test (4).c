#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//最多循环3次
	int i = 0;
	for (i = 0; i < 3; ++i) {
		printf("请输入您的密码: ");
		char password[10] = { 0 };
		scanf("%s", password);
		//c语言中比较两个函数是否相等不能直接用 ==
		//必须使用strcmp函数.strcmp返回值为0时
		//表示两个字符串相等
		if (strcmp(password, "123456") == 0) {
			//密码输入正确
			break;
		}
	}
	//如何区分输入正确导致循环结束,还是输入超过三次导致循环结束?
	if (i < 3) {
		printf("您输入的密码正确,登录成功!\n");
	}
	else {
		printf("您输入的密码超过三次,禁止登录!");
	}
	system("pause");
	return 0;
}