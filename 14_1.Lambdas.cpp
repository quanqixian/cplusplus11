/**
 * C++11 introduced lambdas,allowing the definition of inline
 * functionality,which can be used as a parameter or a local object, 
 * Lambdas change the way the C++ standard library is used.
 *
 * A lambda is a definition of functionality that can be defined inside
 * statements and expressions. Thus, you can use a lambda as an inline function.
 * The minimal lambda function has no parameters and simply dose something:
 */

#include <iostream>
/**
 *lambda基本用法实例
 */

int main(int argc, const char *argv[])
{
	
	[]{
		std::cout<<"hello lambda"<<std::endl;
	};

	[]{
		std::cout<<"hello lambda"<<std::endl;
	}();/* 加()为调用 */

	auto I = [] {
		std::cout<<"hello lambda"<<std::endl;
	};
	I();
	return 0;
}
