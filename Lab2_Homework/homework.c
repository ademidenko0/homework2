#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a = 5;
	int x = 3;
	int res = 75 * a + (133 - 75) * x;
	printf("��������� �������� �� ������� 133 ����� ����� %d\n", res);
}