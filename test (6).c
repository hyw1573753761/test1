#include <stdio.h>
#include <stdlib.h>

struct Student{
	char name[10];
	int id;
};

int main() {
	//�Խṹ����г�ʼ��
	struct Student s = { "zhangsan", 9 };
	printf("%d\n", s.id);
	printf("%s\n", s.name);
	system("pause");
	return 0;
}