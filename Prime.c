#include <stdio.h>

bool IsPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	for(int i=100;i<=200;i++)
	{
		if (IsPrime(i)) printf("%d ", i);
	}
}
