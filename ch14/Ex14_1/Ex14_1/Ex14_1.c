#include <stdio.h>
/*
#printf ���Ĺ���

���Ĺ���		��´��(�ڷ���)	�������
%d			int				��ȣ �ִ� 10���� ����
%u			unsigned int	��ȣ ���� 10���� ����
%o			unsigned int	��ȣ ���� 8���� ����
%x, %X		unsigned int	��ȣ ���� 16���� ����
%f			double			10���� ����� �ε��Ҽ��� �Ǽ�
%e, %E		double			e �Ǵ� E ����� �ε��Ҽ��� �Ǽ�
%g, %G		double			���� ���� %f, %e ���̿��� ����
%c			int				���� ���� �����ϴ� ����
%s			char *			���ڿ�
%p			void *			�������� �ּҰ�
%n			int *			�������� �ּҰ�
*/

int main(void)
{
	printf("%d, %d \n", 127, -127);
	printf("%u \n", 127U);
	printf("%o \n", 127U);
	printf("%x \n", 127U);
	printf("%X \n", 127U);
	
	return 0;
}