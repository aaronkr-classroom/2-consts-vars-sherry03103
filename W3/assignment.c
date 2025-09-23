//assignment.c
/*
문제) 100만원, 연평균 10% 수익률 주식 투자(연간 12번 복리)
40년 후 금액 printf()

조건1) calc.h 파일과 A = P(1 + r/n)^(nt) 공식을 사용
조건2) math.h 라이브러리의 pow(value, exponent) 함수 사용

A=미래 가치(결과값)
P=원금
r=연 이자율
n=이자가 몇 번 복리로 계산되는지(12번)
t=돈을 투자한 기간(40년)
*/

#include<stdio.h>
#include <math.h>


int main(void) {
	double P = 1000000;
	double r = 0.10;
	double n = 12;
	double t = 40;

	double A = P * pow((1 + r / n), (n * t));

	printf("From %.2fKRW => %.2fKRW!",P, A);

	return 0;
}
