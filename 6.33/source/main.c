#include<stdio.h>
#include<stdlib.h>
#define g 10
int Bsearch(int *A, int low, int up, int key);
main()
{
	int n, i, a[g] = { 0 }, k, ans;
	for (i = 0; i < g; i++)
	{
		scanf_s("%d", &k);
		a[i] = k;
	}
	scanf_s("%d", &n);
	ans = Bsearch(a, a[0], a[9], n);
	printf("%d", ans);
	system("pause");
}
int Bsearch(int *A, int low, int up, int key)
{
	if (low <= up) {
		int mid = low + (up - low) / 2;
		if (key == A[mid])
			return mid;
		else if (key > A[mid])
			return Bsearch(A, low, mid - 1, key);
		else
			return Bsearch(A, mid + 1, up, key);
	}
	return -1;
}