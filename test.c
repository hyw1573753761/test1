#include <stdio.h>
#include <stdlib.h>

int Factor(int n) {
	int result = 1;
	for (int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}

int main() {
	printf("%d\n", Factor(10));
	return 0;
 }