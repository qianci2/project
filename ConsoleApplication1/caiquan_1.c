#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("��ȭ��Ϸ��ʯͷ������\n");
	printf("ʯͷ��1��������2������3\n");
	srand(time(NULL));
	int rand_number = rand() % 3 + 1;
	printf("%d", rand_number);
	int player,num_play;
	scanf_s("%d", &player);
	printf("%d\n", player);
	num_play = rand_number - player;
	if (num_play == 0)
		printf("ƽ��");
		else if ((num_play < 0 && num_play != -2) || num_play == 2)
			printf("������");
		else
			printf("��Ӯ��");
	printf("\n��������%d", rand_number);
}