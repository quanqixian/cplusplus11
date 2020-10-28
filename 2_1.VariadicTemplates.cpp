#include <iostream>
#include <bitset>
/**
 * ...就是一个所谓的pack（包）
 * 用于 template parameters，就是 template parameters pack（模板参数包）
 * 用于 function paramerer types，就是 function parameter types pack（函数参数类型包）
 * 用于 function parameters，就是function parameters pack（函数参数包）
 */
using namespace std;
void print()
{    

}
template <typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{    
	/**
	 * Inside variadic templates, sizeof...(args) yields the number of arguments
	 */
	cout<<"    sizeof...(args)="<<sizeof...(args)<<endl;
	cout<<firstArg<<endl;
	print(args...);
}
template<typename... Types>
void print(const Types&... args)
{    
	cout<<"TODO"<<endl;
}
int main(int argc, const char *argv[])
{
	print(7.5, "hello", bitset<16>(377), 62);
	return 0;
}
