#include<stdio.h>
#include<math.h>
#define n 10
int BinarySearch(int T[], int x) {
	int l = 1, r = n;
	while (1 <= r)
	{
		int m = floor((1 + r) / 2.0);
		if (T[m] == x)
			return m;
		else if (T[m] > x)
			r = m - 1;
		else
			l = m + 1;
	}
	return 0;
}
int main() {
	int T[n] = { 1,3,5,7,9,11,13,15,17,19 };
	int x;
	scanf_s("%d", &x);
	int r = BinarySearch(T, x);
	if (r != 0)
		printf("%d", r + 1);
	else
		printf("%d", r);
	return 0;
}