#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x = '*';

	char* y = &x;

	printf("���� x�� �ּ� = %u, �ƽ�Ű �� = %d, ���� = %c\n", y, *y, *y);

	return 0;
}