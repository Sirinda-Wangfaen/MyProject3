#include<stdio.h>
int main() {
	double x;
	scanf_s("%lf", &x);
	if (x == (int)x) {
		if ((int)x % 2 == 0) {
			printf("even");
		}
		else printf("odd");
	}

	return 0;
}