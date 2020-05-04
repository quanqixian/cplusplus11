/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
#include <iostream>
#include <initializer_list>
using namespace std;

/**
 * When there are constructors for both a [specific number of arguments] and an
 * [initializer list],the version with the initializer list is preferred.
 */
class P
{    
public:
	P(int a, int b)
	{    
		cout<<"P(int, int)a="<<a<<",b=" <<b<<endl;
	}
	P(initializer_list<int> initlist)
	{    
		cout<<"P(initializer_list<int>),values=";
		for(auto i:initlist)
		{    
			cout<<i<<" ";
		}
		cout<<endl;
	}
};
int main(int argc,const char*argv[])
{    

	P p(77,5);    /*	P(int, int)a=77,b=5 */

	P q{77,5};    /*	P(initializer_list<int>),values=77 5 */
	P r={77,5,42};/*	P(initializer_list<int>),values=77 5 42 */
	P s={77,5};   /*	P(initializer_list<int>),values=77 5  */

	return 0;
}
