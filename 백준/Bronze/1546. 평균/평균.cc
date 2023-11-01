#include <stdio.h>

int main() {
	int n, x, max = 0;
	double ans = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		ans += x;
		if (max < x) max = x;
	}

	ans = ans / max * 100 / n;

	printf("%lf", ans);

	return 0;
}