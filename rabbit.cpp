//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
#include <stdio.h>
int main(void)
{
	int i = 0;
	long num[20] = {1,1};
	for(i=2;i<20;i++)
	{
		num[i] = num[i-1] + num[i-2];
		printf("第%d个月兔子总数为：%d对 \r\n",i+1,num[i]);
	}
	return 0;
}