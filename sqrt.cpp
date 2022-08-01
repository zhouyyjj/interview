//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 0;
	int b = 0;

	int i = 0;

	float c = 0;
	float d = 0;

	float e= 0;
	float f= 0;

	do
	{
		a = i+100;
		b = i+168;
		
		//使用sqrt函数计算开方后的数
		c = sqrt(a);
		d = sqrt(b);

		//判断开方后是否为整数
		e= c - (int)c;
		f= d - (int)d;

		if(e== 0 && f==0)
		{
			printf("%d \r\n",i);
			break;
		}
		i++;
	}while(1);
	return 0;
}