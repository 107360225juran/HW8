#include<stdio.h>
#include<stdlib.h>
int maxium(int *A);
main()
{
	int a[10],max,j;
	for (j = 0; j < 10; j++)
	{
		scanf_s("%d", &a[j]);
	}
	max=maxium(&a);
	printf("max= %d", max);
	system("pause");
}
int maxium(int *A)
{
	int m = 0,i;
	for (i = 0; i < 10; i++)
	{
		if (A[i] > m)
		{
			m = A[i];
		}
	}
	return m;
}