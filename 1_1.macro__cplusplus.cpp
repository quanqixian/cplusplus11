#include <iostream>
/**
 * If available, you can evaluate the predefined macro __cplusplus.
 * For C++11,the following defination holds when compiling a C++ translation
 * unit:
 *
 * #define  __cplusplus 201103L
 *
 * By contrast, with both C++98 and C++03, it was:
 *
 * #define __cplusplus  199711L
 *
 * Note,however, that compiler vendors sometimes provide different values here.
 */
int main(int argc, const char *argv[])
{
	std::cout<<__cplusplus<<std::endl;;
	return 0;
}
