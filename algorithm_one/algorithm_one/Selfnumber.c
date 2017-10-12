#include <stdio.h>

int d(int n);
int arr[10001];

int main() {
	for (int i = 1; i <= 10000; i++) {
		arr[d(i)] = 1;

		if (!arr[i]) {
			printf("%d\n", i);
		}
	}
	return 0;
}

int d(int n) {
	int temp = n;

	if (n >= 10000) { temp += n / 10000; n %= 10000; }
	if (n >= 1000) { temp += n / 1000; n %= 1000; }
	if (n >= 100) { temp += n / 100; n %= 100; }
	if (n >= 10) { temp += n / 10; n %= 10; }

	return temp += n;
}