#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("猜拳游戏：石头剪刀布\n");
	printf("石头：1；剪刀：2；布：3\n");
	srand(time(NULL));
	int rand_number = rand() % 3 + 1;
	printf("%d", rand_number);
	int player,num_play;
	scanf_s("%d", &player);
	printf("%d\n", player);
	num_play = rand_number - player;
	if (num_play == 0)
		printf("平局");
		else if ((num_play < 0 && num_play != -2) || num_play == 2)
			printf("你输了");
		else
			printf("你赢了");
	printf("\n它出的是%d", rand_number);
}