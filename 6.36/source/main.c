#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *A,int n,int c);
main()
{
	char a[100];
	int b=0;
	scanf_s("%s", a,100);
	reverse(&a, strlen(a)-1,b);
	printf("%s", a);
	system("pause");
}
void reverse(char *A, int n, int c)
{
	int i, j =0,a,temp;
    char B[100];
	if (c == (n / 2)+1 || c>n/2) {
		return;
	}
	if (n % 2 == 0 )
	{
		temp = A[c];
		A[c] = A[n-c];
		A[n-c] = temp;
		c++;
		reverse(A,n,c);
	}
	else if (n % 2 == 1 )
	{
		temp = A[c];
		A[c] = A[n - c ];
		A[n - c ] = temp;
		c++;
		reverse(A, n, c);
	}
	//printf("%s\n", A);
	/*
	for (i=strlen(A)-1;i>=0;i--)
	{	
		char c;
		c = A[i];
		B[j] = c;
		j++;
	}
	
	for (a = 0; a <= strlen(A)-1; a++)
	{
		A[a] = B[a];
	}
	*/
}