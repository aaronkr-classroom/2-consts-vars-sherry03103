//calc.c
#define _USE_MATH_DEFINES // 수학 라이브러리
#define PI 3.141592 // 상수 정의
#include <stdio.h>
#include <math.h> // M_PI 상수 있어야하는데 없다?

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { 
	if (b == 0) {  // b는 0이면 안됨
		printf("Error: Divide by 0\n");
		return 0;
	}
	return a / b; }


// circle
double circ_area(double r) {
	return M_PI * r * r;
} //넓이 3.141592

double circ_circ(double r) {
	return 2 * M_PI * r;
} //둘레
