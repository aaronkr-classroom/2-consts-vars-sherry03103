//calc_main.c
#include<stdio.h>
#include"calc.h" //헤더파일 불러오기

int main(void) {
	int a = 4, b = 0;

	printf("더하기 결과 : %d\n", Sum(a, b)); //함수호출가능 // 9
	printf("빼기 결과 : %d\n", Sub(a, b)); // -1
	printf("곱하기 결과 : %d\n", Mul(a, b)); // 20
	printf("나누기 결과 : %d\n", Div(a, b)); //??

	//circle
	printf("반지름 a=4인 원의 넓이는 : %.3f\n", circ_area(a));
	printf("반지름 a=4인 원의 둘레는 : %.3f\n", circ_circ(a));


	return 0;
}