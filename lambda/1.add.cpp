#include <algorithm>
#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main(int argc, const char *argv[])
{
	/* lambda表达式就是匿名函数 */
	/* []捕获列表 ()参数列表  ->返回值 */
	int sum = [](int a, int b)->int {
		/* 函数体 */
		return a + b;
	}(1, 2);
	cout<<sum<<endl;

	auto f = [](int a, int b)->int {
		return a + b;
	};
	sum = f(1, 2);
	cout<<sum<<endl;

	/* 函数式编程 */
	sum = [](int n){
		return [n](int x)
		{
			return n + x;
		}(1);
	}(2);
	cout<<sum<<endl;

	auto f2 = [](int n){
		return [n](int x){
			return n+x;
		};
	};
	sum = f2(1)(2);
	cout<<sum<<endl;
	return 0;
}
