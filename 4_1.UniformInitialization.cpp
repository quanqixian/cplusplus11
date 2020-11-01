/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/

#include <string>
#include <vector>
#include <complex>

using namespace std;

int main(int argc,const char*argv[])
{    

	/**
	 * Before c++11,programmers,especially novices,could easily become confused
	 * by the question of how to initialize a variable or an
	 * object.Initialization could happen with [ parentheses ],[ braces ],and/or
	 * [ assignment operators ].
	 */

	/**
	 * For this reason, c++11 introduced the concept of [ uniform initialization ],
	 * which means that for any initialization,you can use one common
	 * syntax,this syntax uses braces,so the following is possible now:
	 */
	int values[] {1,2,3};
	vector<int> v {2,3,4,5};
	vector<string> cities {"Berlin", "New York", "London"};
	complex<double> c{4.0, 3.0}; //equivalent to c(4.0, 3.0);

	return 0;
}

