//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, sn = 0, tmp = 0;
	printf("������һ��С��ʮ������\n");
	scanf("%d", &a);
	for (int i = 1; i <= 5; i++) {
		tmp = tmp * 10 + a;
		sn += tmp;
	}
	printf("sn = %d\n", sn);

	system("pause");
	return 0;
}