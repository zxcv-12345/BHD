#include<stdio.h>
int b(int n);
int s(int n);
int main()
{
	int n;
	scanf_s("%d", &n);
	b(n);
	printf("\n");
	s(n);
	return 0;
}
int b(int n)
{
	int a[99];
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
int s(int n)
{
	int a[99], i = 0;
	char c[16] = { '0','1','2','3','4','5','6','7','8','9', 'A','B','C','D','E','F'};
	while (n>15)
	{
		a[i] = n % 16;
		i++;
		n = n / 16;
	}
	a[i] = n;
	for (; i >= 0; i++)
		printf("%c",c[a[i]]);
}