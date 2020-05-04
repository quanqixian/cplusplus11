/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
#include <iostream>
#include <initializer_list>


/**
 * to support the cpncept os initializer lists for user-defined types,c++11
 * provides the class template std::initializer_list<>.
 * It can be used to support initializations by a list of values or in any
 * other place where you want to process just a list of vlaues,For example:
 */
void print(std::initializer_list<int> vals)
{    
	for(auto p = vals.begin();p != vals.end(); ++p)
	{    
		std::cout<< *p <<"\n";
	}
}
int main(int argc,const char*argv[])
{    

	/* 传给initializer_list者，一定必须也是initializer_list(or{...}形式) */
	print({12,3,5,7,13,17});  //pass a list of values to print()

	return 0;
}
