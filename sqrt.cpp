//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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
		
		//ʹ��sqrt�������㿪�������
		c = sqrt(a);
		d = sqrt(b);

		//�жϿ������Ƿ�Ϊ����
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