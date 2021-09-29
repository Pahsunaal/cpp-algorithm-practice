#include <cstdio>

void FizzBuzz(long max) {
	bool printed;
	for (long i{}; i <= max; i++) {
		printed = false;
		if (i % 3 == 0) {
			printf("Fizz");
			printed = true;
		}
		if (i % 5 == 0) {
			printf("Buzz");
			printed = true;
		}
		if (!printed) printf("%d", i);
		printf("\n");
	}
}

int main() {
	long max{-1};
	while (max < 0) {
		printf("Enter a maximum number: ");
		scanf_s("%ull", &max);
	}
	FizzBuzz(max);
}