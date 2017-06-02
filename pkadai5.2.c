#include <stdio.h>

int func(int a, int b);
int main(void)
{
	int a, b, tasu;
	a =1;
	b =2;
	tasu = func(a, b);
	printf("\%d\n", tasu);
}

int func (int x, int y)
{
	int plus;
	plus = (x + y);
	
	return plus;
}
