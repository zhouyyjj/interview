//������������x,y,z���������������С�������
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	int temp = 0;

	printf("��������������:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if(b>c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	printf("%d<%d<%d\n",a,b,c);
	return 0;
}