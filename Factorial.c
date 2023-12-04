#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int temp = n;
	while(temp-->1)
	{
		n *= temp;
	}
	printf("%d", n);
	return 0;
}
