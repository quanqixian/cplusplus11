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
	}();

	auto I = [] {
		std::cout<<"hello lambda"<<std::endl;
	};
	I();
	return 0;
}
