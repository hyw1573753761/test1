#include <stdio.h>
#include <stdlib.h>
//һ�������ڼ�����ж�����λ1�ĸ���
int CountBit(int num) {
	int count = 0;
	while (num > 0) {
		if (num % 2 == 1) {
			++count;
		}
		num = num >> 1;
	}
	return count;
}
int main() {
	// 0000 1010
	int x = 10;
	printf("%d\n", CountBit(x));
	system("pause");
	return 0;
}
