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
		printf("현재 스틱의 개수: %d\n", init);
		printf("몇 개의 스틱을 가져가시겠습니까?: ");
		scanf_s("%d", &user);
		init -= user;

		if (init <= 0)
		{
			printf("컴퓨터 승리");
			break;
		}

		computer = rand() % 4;	//0~3 사이의 난수를 만드려면 4로 나눠줘야 함

		printf("**컴퓨터는 %d개의 스틱을 가져갔습니다.\n\n", computer);
		init -= computer;

		if (init <= 0)
		{
			printf("사용자 승리");
			break;
		}
	} 
	while (init > 0);

	return 0;
}