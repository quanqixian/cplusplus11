#include <iostream>
#include <functional>

using namespace std;

void output(int x, int y)
{
	cout<< x <<" " << y <<endl;
}

int main(int argc, const char *argv[])
{
	bind(output, 1, 2)();
	bind(output, placeholders::_1, 2)(10);

	bind(output, 2, placeholders::_2)(10, 20);//调用时第一个参数被吞掉了，没有被使用

	bind(output, placeholders::_1, placeholders::_2)(10, 20);
	bind(output, placeholders::_2, placeholders::_1)(10, 20);
	return 0;
}
