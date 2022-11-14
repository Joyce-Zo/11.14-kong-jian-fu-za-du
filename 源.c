#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 计算阶乘递归Factorial的时间复杂度？
//long long Fac(size_t N)
//{
//	if (0 == N)				// 递归算法：递归次数N * 每次递归调用的次数(常数次，记为1)
//		return 1;
//							//	递归N次，时间复杂度 O(N)
//	return Fac(N - 1) * N;
//}

// 计算斐波那契递归Fibonacci的时间复杂度？
long long Fib(size_t N)
{
	if (N < 3)
		return 1;
						//	O(N)
	return  Fib(N - 1) + Fib(N - 2);
}
int main()
{
	printf("%lld", Fib(50));
	return 0;
}