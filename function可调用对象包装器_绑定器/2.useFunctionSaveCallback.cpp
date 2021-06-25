#include <iostream>
#include <functional>
using namespace std;

class A
{
public:
	A(const function<void()>& f) : callback(f)
	{
	}
	void notify()
	{
		callback();
	}
private:
	function<void()> callback;
};

class B
{
public:
	void operator()()
	{
		cout<<"B::operator()"<<endl;
	}
};

int main(int argc, const char *argv[])
{
	B b;
	A a(b);
	a.notify();

	return 0;
}
