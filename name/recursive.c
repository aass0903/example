#include <stdio.h>
#include <time.h>

int Fib(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	return (Fib(n - 1) + Fib(n - 2));
}
int main()
{
	clock_t start, end;

	start = clock();
	for (int n = 15; n <= 40; n += 5)
	{
		printf("Fib %d: %d \n", n, Fib(n));
		end = clock();
		printf("걸린시간: %d \n", (end - start));
	}
	return 0;
}