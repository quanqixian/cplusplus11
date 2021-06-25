#include <iostream>
#include <functional>

using namespace std;

class Test
{
public:
	void output(int x, int y)
	{
		cout<<"x:" <<x<<", y:"<<y <<endl;
	}
	int m_number = 100;
};

int main(int argc, const char *argv[])
{
	Test t;

	function<void(int, int)> f1 = bind(&Test::output, &t, placeholders::_1, placeholders::_2);

	f1(1 ,2);

	function<int& (void)> f2 = bind(&Test::m_number, &t);

	f2() = 200;

	cout<<"t.m_number:"<<t.m_number<<endl;
	return 0;
}
