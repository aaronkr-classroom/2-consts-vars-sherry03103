//assignment.c
/*
����) 100����, ����� 10% ���ͷ� �ֽ� ����(���� 12�� ����)
40�� �� �ݾ� printf()

����1) calc.h ���ϰ� A = P(1 + r/n)^(nt) ������ ���
����2) math.h ���̺귯���� pow(value, exponent) �Լ� ���

A=�̷� ��ġ(�����)
P=����
r=�� ������
n=���ڰ� �� �� ������ ���Ǵ���(12��)
t=���� ������ �Ⱓ(40��)
*/
#include<stdio.h>
#include <math.h>
#include "calc.h"

int main(void) {

	double A;
	int P = 1000000;
	double r, n, t;
	r = 0.1*P;
	n = 12;
	t = 40;

	A = pow(P * (1 + (r / n)), (n * t));
	printf("40�� �� �� �ݾ� %d", A);

	return 0;
}

