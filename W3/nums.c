// nums.c
#include<stdio.h>
#include "calc.h"

int main(void) {

	int decimal = 42;
	int octal = 052;
	int hex = 0x2A;
	int binary = 0b101010; // C에서 지원X

	printf("\nDecimal: %d\n\n", decimal);
	printf("Octal: %o \n(Prefix: 0%d) = %d \n\n", octal, octal, octal); // 8진법, 08진법, 10진법 표시
	printf("Hexadecimal: %x \n(Prefix: 0x%x) = %d \n\n", hex, hex, hex);
	printf("Binary(C지원X): 0b101010 = %d \n", binary);
	
	//calc.h
	printf("\n\n----------------------\n");
	printf("|::::::::MATH::::::::|\n");
	printf("\n----------------------\n\n");

	printf("%o + %x = %d\n", octal, hex, Sum(octal, hex)); //Sum()
	printf("%x - %o = %d\n", hex, octal, Sub(hex, octal)); //Sub()
	printf("%o * %x = %d\n", octal, hex, Mul(octal, hex)); //Mul()
	printf("%x / %o = %d\n", hex, octal, Div(hex, octal)); //Div()
	printf("반지름 %x 둘레: %.5f\n", 
		hex, circ_circ((double)hex)); //circ_circ()
	printf("반지름 %o 넓이: %.5f\n", 
		octal, circ_area((double)octal)); //circ_area()



	return 0;
}