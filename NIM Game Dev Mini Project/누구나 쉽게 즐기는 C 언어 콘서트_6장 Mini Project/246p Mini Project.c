#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int init = 12;
	int computer = 0;
	int user = 0;

	srand(time(NULL));

	do
	{
		printf("���� ��ƽ�� ����: %d\n", init);
		printf("�� ���� ��ƽ�� �������ðڽ��ϱ�?: ");
		scanf_s("%d", &user);
		init -= user;

		if (init <= 0)
		{
			printf("��ǻ�� �¸�");
			break;
		}

		computer = rand() % 4;	//0~3 ������ ������ ������� 4�� ������� ��

		printf("**��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n\n", computer);
		init -= computer;

		if (init <= 0)
		{
			printf("����� �¸�");
			break;
		}
	} 
	while (init > 0);

	return 0;
}