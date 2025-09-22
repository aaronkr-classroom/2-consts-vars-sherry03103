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
double A(double P) {
	double r = 0.10;   // �� ������ 10%
	int n = 12;        // �� ���� (�� 12��)
	int t = 40;        // 40�� ����

	return P * pow(1 + r / n, n * t);
}

int main(void) {
	double principal = 1000000;
	double future_value = A(principal);

	printf("40�� �� �ݾ�: %.2f ��\n", future_value);
	return 0;
}