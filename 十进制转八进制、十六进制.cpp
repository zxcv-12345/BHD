#include<stdio.h>
#pragma warning( disable : 4716 )
int b(int n);
int s(int n);
int main()
{
	int n;
	printf("请输入十进制的一个整数！\n");
	scanf_s("%d", &n);
	b(n);
	printf("\n");
	s(n);
	return 0;
}
int b(int n) //八进制
{
	int a[99]{};
	int i = 0;
	while (n>7)
	{
		a[i] = n % 8;
		i++;
		n = n / 8;
	}
	a[i] = n;
	for (; i >= 0; i--)
		printf("%d", a[i]);
}
int s(int n) //十六进制
{
	int a[99]{}, i = 0;
	char c[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while (n>15)
	{
		a[i] = n % 16;
		i++;
		n = n / 16;
	}
	a[i] = n;
	for (; i >= 0; i--) //循环遍历[16]数列（字符型）
		printf("%c",c[a[i]]);
}