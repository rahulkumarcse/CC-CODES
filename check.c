#include <stdio.h>
void f();
int main()
{
	int a=10;
	void f();
	a = f();
 printf("\n %d",a);
}
void f()
{
	printf("hi");
	
}
