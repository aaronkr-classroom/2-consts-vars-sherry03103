//money.c
#include <stdio.h>

int main(void) {
	int won;
	won = 10000000;
	printf("�� ���¿��� %d\\ �ֽ��ϴ�.\n", won);
	
	//��ǥ ����
	const char* easy_won = "10,000,000"; //const(���)
	printf("�� ���¿��� %s\\ �ֽ��ϴ�.\n", easy_won);
	
	printf("+500,000\\ �Ա�\n");
	easy_won = "10,500,000"; 
	printf("�Ա��ؼ� ���� %s\\ �ֽ��ϴ�.\n", easy_won);

	//Bitcoin
	float bc = 10.123456789;
	printf("Bitcoin ���� : %.5fBC\n", bc);

	bc = bc + 0.34567;
	printf("Bitcoin ���� : %fBC\n", bc);

	return 0;
}