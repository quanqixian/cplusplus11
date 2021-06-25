#include <iostream>
#include <functional>

using namespace std;

int add(int a, int b)
{
	cout<<  a << " + " << b <<" = "<<a+b<<endl;
	return a+b;
}

class T1
{
public:
	static int sub(int a, int b)
	{
		cout<<a<<" - "<<b<<" = "<<a - b<<endl;
	    return a - b;
	}
};

class T2
{
public:
	int operator()(int a, int b)
	{
		cout<<a<<" * "<<b<<" = "<<a*b<<endl;
		return a * b;
	}
};

int main(int argc, const char *argv[])
{
	/* 绑定一个普通函数 */
	function<int(int, int) > fadd = add;
	fadd(9, 3);

	/* 绑定一个静态成员函数 */
	function<int(int, int)> fsub = T1::sub;
	fsub(9, 3);

	/* 绑定一个仿函数 */
	T2 t;
	function<int(int, int)> func = t;
	func(9, 3);
	return 0;
}
