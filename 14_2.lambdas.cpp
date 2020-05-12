#include <iostream>
/**
 * the type of a lambda is an anonymose function object(or functor)
 */
class Functor
{
private:
    int id = 0;
public:
	void operator()()
	{
		std::cout<<"in Functor id = "<<id<<std::endl;
		id++;
	}
};
Functor f2;
int main(int argc, const char *argv[])
{

	int id = 0;
	/* 如果没有写mutable 则id不能++ */
	auto f=[id]() mutable {
		std::cout<<"id = "<<id<<std::endl;
		id++;
	};
	
	id =42;
	f();
	f();
	f();
	std::cout<<id<<std::endl;

	f2();
	return 0;
}
