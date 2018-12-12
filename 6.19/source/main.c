#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int procedure(void);
main()
{
	int i,j,t=0,sum;
	srand(time(0));
	scanf_s("%d", &j);
	for (i = 0; i < j; i++)
	{
		sum = procedure();
		if (sum == 7)
		{
			t++;
		}
		if (i == j - 1)
		{
			printf("number 7 of times: %d\n", t);
			printf("j/6= %d", j / 6);
		}
	}
	system("pause");
}
int procedure(void)
{
	int die1, die2,s;
	die1 = 1 + rand() % 6;
	die2 = 1 + rand() % 6;
	s = die1 + die2;

	printf("player rolled %d + %d = %d\n", die1, die2,s);
	return s;
}