/***************
 * filename:
 * date    :
 * author  :
 * function:Spaces in Template Expressions
 * ***************/
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(int argc,const char*argv[])
{    
	vector<list<int> > a;//OK in each C++ version
	vector<list<int>> b; //OK since C++11
	return 0;
}
