#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//���ѭ��3��
	int i = 0;
	for (i = 0; i < 3; ++i) {
		printf("��������������: ");
		char password[10] = { 0 };
		scanf("%s", password);
		//c�����бȽ����������Ƿ���Ȳ���ֱ���� ==
		//����ʹ��strcmp����.strcmp����ֵΪ0ʱ
		//��ʾ�����ַ������
		if (strcmp(password, "123456") == 0) {
			//����������ȷ
			break;
		}
	}
	//�������������ȷ����ѭ������,�������볬�����ε���ѭ������?
	if (i < 3) {
		printf("�������������ȷ,��¼�ɹ�!\n");
	}
	else {
		printf("����������볬������,��ֹ��¼!");
	}
	system("pause");
	return 0;
}