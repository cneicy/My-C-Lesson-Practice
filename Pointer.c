#include <stdio.h>
void swap1(int x, int y)
{
	int temp = y;
	y = x;
	x = temp;
}
void swap2(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}
int main()
{
	int a = 1, b = 8;
	swap1(a, b);
	printf("%d %d", a, b);
	/*swap1执行后未变化原因
	 *a，b作为参数传入后函数内变化的是局部变量，所以a，b不会改变
	*/
	swap2(&a, &b);
	printf("%d %d", a, b);
	/*swap2执行后变化原因
	 *swap2传入的是a，b的内存地址，函数内指针操作是修改a，b的地址值
	 */
	return 0;
}
