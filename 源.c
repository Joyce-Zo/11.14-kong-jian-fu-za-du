#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����׳˵ݹ�Factorial��ʱ�临�Ӷȣ�
//long long Fac(size_t N)
//{
//	if (0 == N)				// �ݹ��㷨���ݹ����N * ÿ�εݹ���õĴ���(�����Σ���Ϊ1)
//		return 1;
//							//	�ݹ�N�Σ�ʱ�临�Ӷ� O(N)
//	return Fac(N - 1) * N;
//}

// ����쳲������ݹ�Fibonacci��ʱ�临�Ӷȣ�
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