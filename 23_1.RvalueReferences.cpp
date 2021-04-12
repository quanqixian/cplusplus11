#include <string>
#include <complex>
using std::string;
using std::complex;

/**
 * Rvalue references are a new reference type introdeced in c++0x that help
 * solve the problem of unnecessary copying and enable perfect forwarding. 
 *
 * whne the right-hand side of an assignment is an rvaue, thend the left-hand
 * side object can steal resources from the right-hand side object rather zhan
 * performing a separate allocation, thus enabling move sementics.
 */

/**
 * Lvalue :可以出现于 operatpr= 左边
 * Rvalue : 只能出现于 operator= 右侧
 */

void test01()
{
	int a = 9;
	int b = 4;

	a = b;
	b = a;
	a = a + b;

	//a +b = 42; //error
}
void test02()
{
	string s1("hello");
	string s2("wrold");

	s1 + s2 = s2;       //竟然可以编译通过

	string() = "world"; //竟然可以对临时对象赋值
}

void test03()
{
	complex<int> c1(3, 8), c2(1, 0);
	c1 + c2 = complex<int>(4, 9);

	complex<int>() = complex<int>(4, 9);//竟然可以对临时对象赋值
}
int main(int argc, const char *argv[])
{
	/**
	 * 临时对象是一种右值，
	 * 右值不可以放在左边
	 * test02和test03是看起来特殊的情况
	 * /
	test01();
	test02();
	test03();

	return 0;
}
