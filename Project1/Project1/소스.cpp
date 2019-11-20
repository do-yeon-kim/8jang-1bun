#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x = '*';

	char* y = &x;

	printf("변수 x의 주소 = %u, 아스키 값 = %d, 문자 = %c\n", y, *y, *y);

	return 0;
}