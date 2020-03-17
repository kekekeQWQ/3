#include<stdio.h>
#include<math.h>
#define n 10
int Search(int T[], int x) {
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (x == T[i]) {
			printf("%d", i + 1);
			break;
		}
		if (i == n - 1)
			printf("0");
	}
	return 0;
}
int main() {
	int T[n] = { 1,3,5,7,9,11,13,15,17,19 };
	int x;
	scanf_s("%d", &x);
	Search(T, x);
	return 0;
}