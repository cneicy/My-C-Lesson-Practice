#include <stdio.h>

int n[10];
int main()
{
	for (int& i : n)
	{
		scanf("%d", &i);
	}
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(n[i]>n[j])
			{
				const int temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for (int& i : n)
	{
		printf("%d ", i);
	}
	return 0;
}
